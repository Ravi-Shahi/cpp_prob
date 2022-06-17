#include<iostream>
using namespace std;

class rectangle{
private:
int length;
int breadth;
public:
//constructor: same name as class and with no return type
rectangle(int l, int b){
    length = l;
    breadth =b;
    cout<<"Length: "<<l<<" "<<"Breadth: "<<b<<endl;
}
void area(){
    cout<<"Area: "<<length*breadth<<endl;
}
void changeLength(int l){
length = l;
cout<<"New Length: "<<length<<endl;
}
void changeBreadth(int b){
breadth = b;
cout<<"New breadth: "<<breadth<<endl;
}
};

int main(){
    cout<<"Enter length & Breadth: ";
    int length, breadth;
    cin>>length>>breadth;
    rectangle r1(length,breadth);
    r1.area();
    //example inputs
    r1.changeLength(2);
    r1.changeBreadth(5);
}