#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H
#include <iostream>
using namespace std;

class UniversityMember{
    string name;
    int memberID;
    public:
    UniversityMember(){}
    UniversityMember(string name, int memberID);
    virtual ~UniversityMember();
    int getMemberID();
    string getName();
    virtual void displayRole()=0;
};

#endif