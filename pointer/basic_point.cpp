#include<iostream>
using namespace std;

void swap(int* a, int* b);
void displayNumber(int* a);
int main(){
    int a =3,b=5;
    //declaring pointer
    int* p= &a; // p stores the address of a
    cout<<p<<endl; // prints the address 
    cout<<*p<<endl; // (*astrix) prints the value of a
    cout<<"value of a is "<<a<<endl<<"value of b is "<<b<<endl;
    swap(&a,&b);
    cout<<"swaped value of a is "<<a<<endl<<"swaped value of b is "<< b<<endl;
    int userInp ;
    cin>>userInp;
    displayNumber(&userInp);
    return 0;
}

void swap(int* a, int*b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}

void displayNumber(int*a){
cout<<"user entered "<<*a<<endl;
}