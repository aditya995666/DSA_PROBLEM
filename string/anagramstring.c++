#include<iostream>
#include<string>
#include<vector>
using namespace  std;
bool isAnagram(string s1,string s2){
    vector<int> fre(26,0);
   // s1and s2 not equal;
    if(s1.length()!=s2.length()){
        return false;
    }
    for(int i=0;i<s1.length();i++){
     fre[s1[i]-'a']++;//s1 increament;
     fre[s2[i]-'a']--;//s2 decreament;
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
        if(isAnagram(s1,s2)){
            cout<<"anagram_yees";
        }
        else{
            cout<<"anagram_no";
        }
    }