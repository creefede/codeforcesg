#include<iostream>
#include<vector>
#include<tuple>
#include <algorithm>
using namespace std;

int main(){
    int s;
    int n;
    cin>>s;
    cin>>n;
    bool capable = true;
    vector<tuple<int, int>> dragons;
    for(int i =0; i<n; i ++){
        int dragon;
        cin>> dragon;
        int reward;
        cin>> reward;
        tuple <int, int> floor(dragon, reward);
        dragons.push_back(floor);
    }
    sort(dragons.begin(), dragons.end());
    
    for(int i =0; i<n; i ++){
        if(s > get<0>(dragons[i])){
            s += get<1>(dragons[i]);
            }
        else if(capable == true){
            capable = false;
            cout<<"NO";
            
            }}

    if(capable){
    cout<<"YES";}
    
return 0;}
