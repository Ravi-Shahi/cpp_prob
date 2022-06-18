#include<iostream>
using namespace std;

template <class T>
class Arthmatic{
private:
  T num1;
  T num2;
public:
  Arthmatic();
  Arthmatic(T num1, T num2);
  T getNum1();
  T getNum2();
  T sum();
  T sub();
  T mul();
  T div();
};

template <class T>
Arthmatic<T>::Arthmatic(){
    num1 = 0;
    num2 = 0;
}

template <class T>
Arthmatic<T>::Arthmatic(T num1, T num2){
 this -> num1 = num1;
 this -> num2 = num2;
}

template <class T>
T Arthmatic<T>::getNum1(){
    return num1;
}
template <class T>
T Arthmatic<T>::getNum2(){
    return num2;
}
template <class T>
T Arthmatic<T>::sum(){
    return num1 + num2;
}
template <class T>
T Arthmatic<T>::sub(){
    return num1 - num2;
}
template <class T>
T Arthmatic<T>::mul(){
    return num1 * num2;
}
template <class T>
T Arthmatic<T>::div(){
    return num1/num2;
}

int main(){
    //providing Demo value
    Arthmatic<int> intArr(5,1);
    Arthmatic<float> arr(5.5,2.0);
    Arthmatic<char> charArr('B','a');
    cout<<"Sum is: "<<arr.sum()<<endl;
    cout<<"Int Type Sum is: "<<intArr.sum()<<endl;
    cout<<"Num1 is: "<<arr.getNum1()<<endl;
    cout<<"Char type is "<<(int)charArr.getNum1()<<endl;
    return 0;
}