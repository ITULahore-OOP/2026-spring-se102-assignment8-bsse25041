#include "department.h"


Department :: Department(string name){
    departmentName =  name;
    memberCount = 0;
}
    
void Department :: addMember(UniversityMember* newMember){
    if(memberCount<50){          //checking to see ttht array isnt full 
        member[memberCount ]= newMember;
        memberCount++;
    }
    else
     cout<<"Department Full!"<<endl;
}

void Department ::displayAllRoles(){
    for(int i=0;i<memberCount;i++){
        member[i]->displayRole();  //calls display role for every type of pointer in the array which calls the specific overriden function according to the type of pointer
    }
}