#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, a, i =0, k, s=0,d=0, j =0;
    cin>>n;
    k=n;
    vector<int> cartas;
    while(j<n){
        cin>>a;
        cartas.push_back(a);
        j++;
    }
    j=0;
    while(j<n){
            if(cartas.at(i)>cartas.at(k-1)){
                if(j%2==0){
                    s=s+cartas.at(i);
                }
                else{d=d+cartas.at(i);}
                i++;
    }
    else{
                if(j%2==0){
                    s=s+cartas.at(k-1);
                }
                else{d=d+cartas.at(k-1);}
                k--;
    }j++;
    }cout<<s<<" "<<d;

}