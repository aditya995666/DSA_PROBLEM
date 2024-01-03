#include<iostream>
using namespace std;
bool egibility(int age,int limit){
  if(age>=limit){
    return true;
  }
    else{
        return false;
    }
  }
int main(){
    int rounak=egibility(18,15);
    if(rounak){
        cout<<"yes";
    }
        else{
            cout<<"no";

        }

    }
