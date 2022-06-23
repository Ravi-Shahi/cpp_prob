#include<iostream>
using namespace std;

void funA(int n);
void funB(int n);

void funA(int n){
    if(n>0){
        cout<<n<<"_";
        funB(n-1);
    }
}

void funB(int n){
    if(n>1){
        cout<<n<<"-";
        funA(n/2);
    }
}

int main(){
    cout<<"Enter number of your choice: "<<endl;
    int n;
    cin>>n;
    funA(n);
    return 0;
}