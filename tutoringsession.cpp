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
//member overloading tht uses one parameter
TutoringSession TutoringSession :: operator+(const TutoringSession& other){
    TutoringSession t3;
    t3.durationMinutes = durationMinutes + other.durationMinutes;  //can directly access class attribute since its a member function
    return t3;
}

bool operator>(TutoringSession s1, TutoringSession s2){     //non member function tht uses two object parameters to compare their attributes
    if(s1.getDuration() > s2.getDuration()) 
        return true;
    else
        return false;
}