#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    string invalid = "AaEeIiOoUuYy";
    string ans;

    cin>>word;
    for(int i =0; i < word.size(); i++){
        if(invalid.find(word[i]) == std::string::npos){
            ans = ans + "." + (char)tolower(word[i]);
        }
    }
    cout << ans;

    return 0;
}
