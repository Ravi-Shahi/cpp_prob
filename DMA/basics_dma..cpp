#include <iostream>
using namespace std;
// using dma to create array and return it to main through a function

int* returnArray(int n){ // n -> number of elements
int *p = new int[n];
for(int i=0;i<n;i++){
    cout<<"Enter your element: "<<endl;
    cin>>p[i];
}
return p;
}
int* dmaSum(int a, int b){
    int *sum = new int;
    *sum = a+b;
    return sum;
}



int main(){
int n;
cout<<"Enter the number of Element "<<endl;
cin>>n;
int *arrAddress = returnArray(n);
for(int i=0;i<n;i++){
    cout<<arrAddress[i]<<" ";
}
cout<<"Array Verification before delete "<<arrAddress[1]<<endl;
delete []arrAddress;
cout<<endl;
int a,b;
cout<<"Two number to sum "<<endl;
cin>>a>>b;
cout<<"sum is "<<dmaSum(a,b)<<endl; // prints address of sum in heap
cout<<"sum is "<<*dmaSum(a,b)<<endl; // prints the value
delete dmaSum(a,b); // makes no sense because no. of dynamic value = no. of function call
int *sum = dmaSum(a,b);
cout<<"Just Verification before delete "<<*sum<<endl;
delete sum;
cout<<"Just Verification "<<*sum<<endl;
cout<<"Array Verification "<<arrAddress[1]<<endl; //prints garbage value
}