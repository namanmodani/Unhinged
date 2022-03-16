//
// CS 32 Project 4
// Naman Modani
// MemberDatabase.h
//

#ifndef MEMBERDATABASE_H
#define MEMBERDATABASE_H

#include <vector>
#include <set>
#include "PersonProfile.h"
#include "RadixTree.h"

struct AttValPair;

class MemberDatabase
{
public:
    MemberDatabase();
    ~MemberDatabase();
    bool LoadDatabase(std::string filename);
    std::vector<std::string> FindMatchingMembers(const AttValPair& input) const;
    const PersonProfile* GetMemberByEmail(std::string email) const;
private:
    RadixTree<PersonProfile*>* m_RadixTreeEmailToProfile;
    RadixTree<std::vector<std::string>*>* m_RadixTreeAttValToEmails;
    std::set<std::string>* m_EmailSet;
    std::set<std::string>* m_AttValSet;
};

#endif //MEMBERDATABASE_H
