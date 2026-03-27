#include "staff.h"


Staff :: Staff(string n, int id, double sal, AccessCard c):UniversityMember(n,id){
    salary = sal;
    card = c;
}

double Staff :: getSalary(){
    return salary;
}

void Staff:: displayCardInfo(){
    cout<<"Card ID: "<<card.getCardID()<<endl;
    cout<<"Access Level: "<<card.getAccessLevel()<<endl;
}

void Staff:: displayRole(){
    cout<<"Role: Staff"<<endl;
}