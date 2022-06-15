#include<iostream>
using namespace std;
/*
1. create structure and access its element with pointer
2. create a function and pass address to change value of structure elements by function
3. same as 2 but with reference
*/
struct abVal{
    int a,b;
};
int solveProb(int a, int b){
    int ans = (a*a)+(b*b)+(2*a*b);
    return ans;
}
//Pass by Val
void whSqr(abVal val){
    int a = val.a;
    int b = val.b;
    int ans = solveProb(a,b);
    cout<<"Your Answer is: "<<ans<<endl;
}
// pass by address
void whSqr(abVal *val){
    int a = val->a;
    int b = val->b;
    cout<<"Makes no sense "<<solveProb(a,b)<<endl;
}
// pass by reference
void changeVal(abVal &ref){
    cout<<"Enter new Value to print: "<<endl;
    cin>>ref.a>>ref.b;
    cout<<"New Value is "<<ref.a<<" "<<ref.b<<endl;
    whSqr(&ref);
}
int main(){
    cout<<"Two numbers to whole square it: "<<endl;
    int a,b;
    cin>>a>>b;
    abVal set1 = {a,b};
    whSqr(set1);  
    whSqr(&set1);
    changeVal(set1);
}