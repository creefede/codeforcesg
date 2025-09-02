#include<iostream>
#include<string>
using namespace std;
int main(){
    string str, rts;
    cin>>str>>rts;
    int len = str.size();
    int i=0, ans =0;
    while(i<len){
        str[i] = tolower(str[i]);
        rts[i] = tolower(rts[i]);
        i++;
    }
    i=0;
    while(i<len){
        if(str[i]>rts[i]){ans=1;break;}
        else if(str[i]<rts[i]){ans=-1;break;}
        i++;
    }
    cout<<ans;
    return 0;
}