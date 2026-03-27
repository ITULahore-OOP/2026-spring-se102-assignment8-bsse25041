#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include "universitymember.h"

using namespace std;

class Department{
    string departmentName;
    UniversityMember* member[50];
    int memberCount;
    public:
    Department(string departmentName);
    void addMember(UniversityMember* member);
    void displayAllRoles();
};

#endif