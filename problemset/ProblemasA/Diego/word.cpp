#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cin>>word;
    string ans;
    int lower = 0;
    int upper =0;
    for(int i =0; i < word.size(); i ++ ){
        if(islower(word[i])){
            lower ++;
        }
        else{
            upper ++;
        }
    }

    for(int i =0; i < word.size(); i ++ ){
        if(upper>lower){
            ans.push_back(toupper(word[i]));
        }
        else{
            ans.push_back(tolower(word[i]));
        }
    }
    cout<<ans;

    return 0;
}