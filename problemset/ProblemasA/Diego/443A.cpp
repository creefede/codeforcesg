#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    set<char> letters;
    string input;
    getline(cin, input);

    for(int i =0; i<input.size(); i++){
        if(input[i] >= 'a' && input[i] <= 'z'){
            letters.insert(input[i]);
        }
    }

    cout<<letters.size();

    return 0;
}
