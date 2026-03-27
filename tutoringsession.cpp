#include "tutoringsession.h"


TutoringSession :: TutoringSession(int id, double duration, TeachingAssistant* t, Student* s){
    sessionID = id;
    durationMinutes = duration;
    ta = t;
    student = s;
}
   
double TutoringSession :: getDuration(){
    return durationMinutes;
}
    
void TutoringSession :: displaySession(){
    cout<<"Session ID: "<<sessionID<<endl;
    cout<<"Duration: "<<durationMinutes<<endl;
}
   
TutoringSession TutoringSession :: operator+(const TutoringSession& other){
    TutoringSession t3;
    t3.durationMinutes = durationMinutes + other.durationMinutes;
    return t3;
}

bool operator>(TutoringSession s1, TutoringSession s2){
    if(s1.getDuration() > s2.getDuration())
        return true;
    else
        return false;
}