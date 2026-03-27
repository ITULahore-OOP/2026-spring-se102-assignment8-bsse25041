#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include <iostream>
#include "teachingassistant.h"
#include "student.h"

using namespace std;

class TutoringSession{
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;
    public:
    TutoringSession(){}
    TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);
    double getDuration();
    void displaySession();
    TutoringSession operator+(const TutoringSession& other);

};

bool operator>(TutoringSession t1, TutoringSession t2);

#endif