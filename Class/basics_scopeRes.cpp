#include<iostream>
using namespace std;

class Arthmatic{
private:
  int num1;
  int num2;
public:
  Arthmatic();
  Arthmatic(int a, int b);
  int sum();
  int sub();
  int mul();
  int div();
  void getNum1();
  void getNum2();
};

Arthmatic::Arthmatic(){
    num1 = 0;
    num2 = 0;
}
Arthmatic::Arthmatic(int a, int b){
    num1 = a;
    num2 = b;
}
int Arthmatic::sum(){
    return num1 + num2;
}
int Arthmatic::sub(){
    return num1 - num2;
}
int Arthmatic::mul(){
    return num1 * num2;
}
int Arthmatic::div(){
    return num1/num2;
}
void Arthmatic::getNum1(){
    cout<<"num1: "<<num1<<endl;
}
void Arthmatic::getNum2(){
    cout<<"num2: "<<num2<<endl;
}

int main(){
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    Arthmatic a1(a,b);
    a1.getNum1();
    a1.getNum2();
    cout<<"Sum:"<<a1.sum()<<endl;
    cout<<"Subtraction:"<<a1.sub()<<endl;
    cout<<"Multiplication:"<<a1.mul()<<endl;
    cout<<"Division:"<<a1.div()<<endl;
    return 0;
}