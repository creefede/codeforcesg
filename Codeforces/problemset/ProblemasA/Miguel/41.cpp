#include<iostream>
#include<string>
using namespace std;
int main(){
    int i =0, res =0;
    string str, rts;
    cin>>str>>rts;
    if(str.size() != rts.size()){
        cout<<"NO";
    }else{
        while(i<str.size()){
            if(str[i] != rts[rts.size()-i-1]){res=1;}
            i++;
        }
        if(res == 1){cout<<"NO";}
        else{cout<<"YES";}
    }
    return 0;
}
