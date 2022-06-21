#include<iostream>
#include<string>

using namespace std;

class Authentication{
private:
    string userList[5] = {"user_1","user_2","user_3","user_4","user_5"};  
    string passList[5] = {"pass_1","pass_2","pass_3","pass_4","pass_5"}; 
public:
    Authentication(){
    cout<<endl<<"-------------------------------------"<<endl<<"You are allowed only once"<<endl<<"-------------------------------------"<<endl<<endl;
    }
    string getUser(){
        cout<<"Enter username: "<<endl;
        string inp_user;
        cin>>inp_user;
        return inp_user;
    }
    string getPass(){
        cout<<"Enter password: "<<endl;
        string inp_pass;
        cin>>inp_pass;
        return inp_pass;
    }
    bool verifyUser(){
        string user = getUser();
        string pass = getPass();
        bool isUser = false;
        for(int i =0; i<5;i++){
            if(user == userList[i]){
                if(pass == passList[i]){
                    return true;
                }
            }else{
                return false;
            }
        }

    }
  
};


int main(){
    Authentication cls_chk;
    bool islegitimate = cls_chk.verifyUser();
    if(islegitimate){
        cout<<"ITS YOU MY FRIEND! Welcome Back!!!";
    }else{
        cout<<"IMPOSTER!!! STEP AWAY!";
    }
    return 0;
}