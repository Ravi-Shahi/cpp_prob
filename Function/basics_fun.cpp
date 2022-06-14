/* 
1. function with no return type
2. function with interger return type
3. Passing method:
    a. Value
    b. Address -> Pointer
    c. Reference -> nickname of a variable
*/
#include<iostream>
using namespace std;
// Declaration of function
// function prototype
void hello();
//Pass by Value
void add(int a, int b); // no return type
int power(int a, int b); //returns int type
void passAdd(int *a); // Pass by address
void passRef(int &a); //Reference


int main(){
//function call
hello();
//Pass by Value
add(3,7);
int returnedVal = power(3,3);
cout<<returnedVal<<" is value from power function"<<endl;
int userInp;
cin>>userInp;
passAdd(&userInp);
passRef(userInp);
}


// function defination
void hello(){
    cout<<"Hello User!"<<endl;
}

void add(int a, int b){
    int sum = a + b;
    cout<<"Sum of numbers is "<<sum<<endl;
}

int power (int a, int b){
    int ans = 1;
    for (int i=1;i<=b;i++){
        ans *=a;
    }
    return ans;
}

void passAdd(int *a){
    cout<<"Value entered by user is "<<*a<<endl;
}

void passRef(int &r){
    cout<<"Value entered by user is "<<r<<endl;
}

