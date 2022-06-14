#include <iostream>
using namespace std;
//function prototype
void displayArray(int A[]);

int main(){
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    // display array using for loop
    for(int i = 0; i<10;i++){
        cout<<a[i]<<endl;
    }
    // display using foreach
    for(int x: a){
        cout<<x<<" ";
    }
    // auto keyword in foreach
    for(auto f: a){
        cout<<endl<<f;
    }
    // passing Array to a function
    displayArray(a);
}

void displayArray(int A[]){
    cout<<endl<<"address of first index of array is "<<A<<endl;
   for(int i=0;i<10;i++)
     cout<<A[i]<<" ";
}