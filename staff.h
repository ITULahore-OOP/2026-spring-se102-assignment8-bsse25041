#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include "universitymember.h"
#include "accesscard.h"
using namespace std;

class Staff: virtual public UniversityMember{
    double salary;
    AccessCard card;
    public:
    Staff(string name, int memberID, double salary, AccessCard card);
    double getSalary();
    void displayRole() override;
    void displayCardInfo();

};

#endif