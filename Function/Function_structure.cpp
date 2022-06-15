#include<iostream>
using namespace std;
/*
Create a Structure Rectangle
Create a function to 
    initialise Rectangle
    find area
    change length
    change breadth
*/
struct Rectangle
{
  int length;
  int breadth;
};

void initialize(Rectangle *r, int l, int b){
    r->length = l;;
    r->breadth = b;
}
int area(Rectangle *r){
    int length = r->length;
    int breadth = r->breadth;
    int area = length * breadth;
    return area;
}
void changeLength(Rectangle *r, int l){
    r->length=l;
}
void changeBreadth(Rectangle *r, int b){
    r->breadth=b;
}

int main(){
cout<<"Enter length and Breadth of Rectangle: "<<endl;
int l,b;
cin>>l>>b;
Rectangle r1;
initialize(&r1,l,b);
int r1_area = area(&r1);
cout<<"Area: "<<r1_area<<endl;
changeLength(&r1,5);
changeBreadth(&r1,5);
r1_area = area(&r1);
cout<<"changedLength: "<<r1.length<<" "<<"changedBreadth: "<<r1.breadth<<endl;
cout<<"Area: "<<r1_area<<endl;
}
