#include<iostream>
using namespace std;

// sum of n number using recursion
void nSum(int n){
    static int sum;
    int count = 0;
    if(sum == 0){
      count++;
    }
    if(n>0){
        sum += n;
        nSum(n-1);
    }
    if(count == 1){
      cout<<"Sum: "<<sum<<endl;
    }
}

int main(){
    cout<<"Enter number: "<<endl;
    int n;
    cin>>n;
    nSum(n);
    return 0;
}