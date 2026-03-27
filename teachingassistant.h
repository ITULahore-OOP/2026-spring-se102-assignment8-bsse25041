#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H
#include <iostream>
#include "staff.h"
#include "student.h"
using namespace std;

class TeachingAssistant: public Staff, public Student{
    int workingHours;
    public:
    TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);
    void displayRole() override;
    void gradeAssignment(int score);
    void gradeAssignment(string letterGrade);
};

#endif