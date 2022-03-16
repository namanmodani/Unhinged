//
// CS 32 Project 4
// Naman Modani
// RadixTree.h
//

#ifndef RADIXTREE_H
#define RADIXTREE_H

#include <map>
#include <vector>
#include <string>

const int MAX_CHILD_COUNT = 128;

template <typename ValueType>
class RadixTree
{
public:
    RadixTree();
    ~RadixTree();
    void insert(std::string key, const ValueType& value);
    ValueType* search(std::string key) const;
private:

    struct RadixNode
    {
        ValueType* val;
        RadixNode* children[MAX_CHILD_COUNT];
        std::string edge[MAX_CHILD_COUNT];
        RadixNode()
        {
            val = nullptr;
            for (int i = 0; i < MAX_CHILD_COUNT; i++)
                children[i] = nullptr;
        }
        ~RadixNode()
        {
            delete val;
            for (int i = 0; i < MAX_CHILD_COUNT; i++)
            {
                delete children[i];
            }
        }
    };

    RadixNode* m_root;

    void insertHelper(RadixNode* root, std::string, const ValueType& value);
    RadixNode* searchHelper(RadixNode* root, std::string key) const;
};

template <typename ValueType>
RadixTree<ValueType>::RadixTree()
        : m_root(new typename RadixTree<ValueType>::RadixNode)
{}

template <typename ValueType>
RadixTree<ValueType>::~RadixTree()
{
    delete m_root;
}

#endif //RADIXTREE_H