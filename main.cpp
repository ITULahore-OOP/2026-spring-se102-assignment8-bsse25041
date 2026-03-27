#include "accesscard.h"
#include "department.h"
#include "staff.h"
#include "student.h"
#include "teachingassistant.h"
#include "tutoringsession.h"
#include "universitymember.h"
#include <iostream>
using namespace std;

int main(){
    AccessCard c1("01", 1);
    AccessCard c2("02", 2);
    AccessCard c3("03",2);
    AccessCard c4("04", 2);

    Student s1("Ali", 03, 3.2);
    Student s2("Ayesha", 05, 3.5);

    Staff f1("Mr Nouman", 05, 45000, c1);
    Staff f2("Ms Maryam", 07, 55000, c2);

    TeachingAssistant t1("Farhan", 03, 3.7, 15000, c3, 5);
    TeachingAssistant t2("Hamza", 04, 3.6, 15000, c4, 4);

    Department d("Engineering");
    d.addMember(&s1);
    d.addMember(&s2);
    d.addMember(&f1);    //adding university members to the dept
    d.addMember(&f2);
    d.addMember(&t1);
    d.addMember(&t2);
    cout<<endl;
    d.displayAllRoles();
    cout<<endl;
    t1.gradeAssignment(95);   //checking overloading functionality
    t2.gradeAssignment("B");

    TutoringSession ses1(01, 45.0, &t1, &s2);      
    TutoringSession ses2(02, 50.0, &t2, &s1);

    TutoringSession ses3 = ses1 + ses2;   //appplying operator overloading
    cout<<endl;
    cout<<"Duration of combined session: "<<ses3.getDuration()<<endl;   
    cout<<endl;
    if(ses1 > ses2)
    cout<<"First Session is longer."<<endl;
    else
    cout<<"Second Session is longer."<<endl;
    return 0;

}
