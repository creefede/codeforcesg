#include<iostream>
#include<string>
using namespace std;
int main(){
    long long n, i = 0, cont = 0;
    cin>>n;
    string N=to_string(n);
        while(i < N.size()){
            if(N[i] == '4'||N[i] == '7'){
                cont ++;
            }
            i++;
        }
    if (cont==7 || cont== 4){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
