#include "department.h"


Department :: Department(string name){
    departmentName =  name;
    memberCount = 0;
}
    
void Department :: addMember(UniversityMember* newMember){
    if(memberCount<50){
        member[memberCount ]= newMember;
        memberCount++;
    }
    else
     cout<<"Department Full!"<<endl;
}

void Department ::displayAllRoles(){
    for(int i=0;i<memberCount;i++){
        member[i]->displayRole();
    }
}