#include<iostream>
#include<string>
using namespace std;

class student{
private:
int std_class;
int std_roll;
string std_name;
public:
student(int cls, int roll, string name){
    std_class = cls;
    std_roll = roll;
    std_name = name;
    displayStud();
}
void updateClass(int cls){
std_class = cls;
}
void updateRoll(int roll){
    std_roll = roll;
}
void updateName(string name){
    std_name = name;
}
void displayStud(){
    cout<<"Class: "<<std_class<<" "<<"Roll no.: "<<std_roll<<" "<<"Name: "<<std_name<<endl;
}
};
int main(){
    int cls, roll;
    string name;
    cout<<"Enter Student's class: "<<endl;
    cin>>cls;   
    cout<<"Enter Stundent's roll number: "<<endl;
    cin>>roll;
    cout<<"Enter Student's name: "<<endl;
    cin.ignore();
    getline(cin, name);
    student ravi(cls,roll,name);
    // just testcase
    ravi.updateRoll(2);
    ravi.updateName("ChangedName");
    ravi.displayStud();
}