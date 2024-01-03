#include<iostream>
#include<string>
#include<vector>
using namespace  std;
bool isIsomorphic(string s1,string s2){
    vector<int> fre(26,0);
   // s1and s2 not equal;
    if(s1.length()!=s2.length()){
        return false;
    }
    for(int i=0;i<s1.length();i++){
      if(s1[i]==s1[i])
      s1[i]++;
      s2[i]++;
    }
    for(int i=0;i<26;i++){
        if(fre[i]!=0){
            return false;
           }
              }
    }
    int main(){
        string s1,s2;
        cin>>s1>>s2;
        if(isIsomorphic(s1,s2)){
            cout<<"same_yees";
        }
        else{
            cout<<"same_no ";
        }
    }