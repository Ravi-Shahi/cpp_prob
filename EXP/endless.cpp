#include<iostream>
using namespace std;

void iAmEndL(){
    static int count = 0;
    count ++;
cout<<"Defective/path/"<<"----"<<count<<endl;
iAmEndL();
}

int main(){
cout<<"WARNING!!!"<<endl;
iAmEndL();
}