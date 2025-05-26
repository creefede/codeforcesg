#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, i =0, pal, res=0, j=0, k=0, ans;
    string str;
    cin>>n;
    while(i<n){
        cin>>str;
        pal = stoi(str);
        while(j<99){
            while(k<99){
                ans = (j+k)*(j+k);
                if(ans==pal){res =1;break;}
                k++;
            }
            if(res==1){break;}
            k = 0;
            j++;
        }i++;
        if(res==1){cout<<j<<" "<<k<<endl;}
        else{cout<<-1<<endl;}
        j=0;
        res=0;
    }
}
