#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, j=0;
        cin>>n;
        vector<int> num;
        while(j<n){
            cin>>a;
            num.push_back(a);
            j++;
        }
        int i= 0;
        while(true){
            if(num.at(i) != num.at(i+1)){
                if(num.at(i) != num.at(i+2)){cout<<'1'<<endl;break;}
                else{cout<<'2'<<endl;break;}
            }else{
                i=2;
                while(i<n){
                    if(num.at(0) != num.at(i)){cout<<i+1<<endl;break;}
                    i++;
                }
                break;
            }
        }
    }
}