//
// CS 32 Project 4
// Naman Modani
// AttributeTranslator.h
//

#ifndef ATTRIBUTETRANSLATOR
#define ATTRIBUTETRANSLATOR

#include <vector>
#include <set>
#include <string>
#include "provided.h"
#include "RadixTree.h"

class AttributeTranslator
{
public:
    AttributeTranslator();
    ~AttributeTranslator();
    bool Load(std::string filename);
    std::vector<AttValPair> findCompatible(const AttValPair& source) const;
private:
    RadixTree<std::vector<AttValPair>*>* m_RadixTreePairToPair;
    std::set<std::string>* m_SourceAttValSet;
};

#endif //ATTRIBUTETRANSLATOR