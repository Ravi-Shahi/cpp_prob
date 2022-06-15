#include<iostream>
#include<string>
using namespace std;

struct student{
    int roll,std_class;
    string first_name, last_name;   
};

int main(){
    cout<<"Enter the number of students: "<<endl;
    int n;
    cin>>n;
    student arr[n];    
    //Input Student details
    for(int i=0;i<n;i++){
        cout<<"Enter roll number: "<<endl;
        cin>>arr[i].roll;
        cout<<"Enter class: "<<endl;
        cin>>arr[i].std_class;
        cout<<"Enter first name: "<<endl;
        cin>>arr[i].first_name;
        cout<<"Enter last name: "<<endl;
        cin>>arr[i].last_name;
    }
    //Display Students detail
    for(student x: arr){
        cout<<"Name: "<<x.first_name +" " + x.last_name<<" "<<"Roll: "<<x.roll<<" "<<"Class: "<<x.std_class<<endl;
    }
}
