#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,r;
    cin>>s;
    char S;
    int i = 0;
 
    while(i<s.size()){
        S= tolower(s[i]);
        if((S != 'a' && S != 'e' && S != 'i' && S != 'o' && S != 'u' && S != 'y')){
            r.push_back('.');
            r.push_back(S);
        }
        i++;
    }cout<<r;
    return 0;
}
