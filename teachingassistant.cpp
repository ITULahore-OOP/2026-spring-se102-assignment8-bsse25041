#include "teachingassistant.h"


TeachingAssistant :: TeachingAssistant(string n, int id, double gpa, double sal, AccessCard c, int hrs): UniversityMember(n,id),Student(n,id, gpa), Staff(n, id, sal, c){
    workingHours = hrs;
}
   
    
void TeachingAssistant :: gradeAssignment(int score){
    cout<<"numeric score: "<<score<<"/100"<<endl;
}
   
void TeachingAssistant :: gradeAssignment(string letterGrade){
    cout<<"letter grade: "<<letterGrade<<endl;
}

void TeachingAssistant :: displayRole(){
    cout<<"Role: Teaching Assistant"<<endl;
}