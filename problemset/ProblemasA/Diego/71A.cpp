#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string s;
        cin>> s;
        if(s.size() > 10){
        cout<< s[0] << to_string(s.size() - 2) << s[s.size()-1]<< endl;
        
        }
        else{
        cout<< s<< endl;    
        }
    }
    
return 0;
}
