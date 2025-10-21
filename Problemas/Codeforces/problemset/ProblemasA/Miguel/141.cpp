#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1, str2, strt, str12;
    cin>>str1>>str2>>strt;
    str12=str1+str2;
    if(str12.size()!=strt.size()){cout<<"NO";}
    else{
        sort(str12.begin(), str12.end());
        sort(strt.begin(), strt.end());
        if(str12==strt){cout<<"YES";}
        else{cout<<"NO";}
    }
    return 0;
}