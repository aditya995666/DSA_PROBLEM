#include<iostream>
#include<string>
#include<vector>
using namespace  std;
string shortedstring(string str){
    vector<int> fre(26,0);
    for(int i=0;i<str.length();i++){
        int ind=str[i]-'a';
        fre[ind]++;
    }
    int j=0;
    for(int i=0;i<26;i++){
        while(fre[i]--){
            str[j++] =i+'a';
        }
    }
    return str;
}
int main(){
    string str;
    cin>>str;
    cout<<shortedstring(str)<<endl;
}