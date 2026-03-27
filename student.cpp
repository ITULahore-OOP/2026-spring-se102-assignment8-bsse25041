#include "student.h"

 Student :: Student(string n, int id, double gpa): UniversityMember(n,id){
    cgpa = gpa;
 }
   
double Student :: getCGPA(){
    return cgpa;
}
   
void Student :: updateCGPA(double newCGPA){
    cgpa =  newCGPA;
}

void Student :: displayRole(){
    cout<<"Role: Student"<<endl;
}