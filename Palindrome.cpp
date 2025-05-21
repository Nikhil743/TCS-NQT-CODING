
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abbccba";
    bool ispali = true;
   int i = 0;
   int j = s.length()-1;
   
   while(i < j){
       if(s[i] != s[j]){
           ispali = false;
           break;
       }
       i++;
       j--;
   }
       if(ispali){
           cout<<"yes";
       }
       else
       cout<<"no";
   
}
