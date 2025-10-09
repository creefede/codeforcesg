#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i=0,cont =1, res =0;
    string n;
    cin>>n;
    while(i<n.size()){
        if(n[i] == n[i+1]){
            cont ++;
        }else{
            cont = 1;
        }if (cont > 6){
            res = cont;
        }i++;
    }if (res > 6){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
 
    return 0;
}
