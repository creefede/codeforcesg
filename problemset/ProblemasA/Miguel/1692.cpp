#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, a, b;
    cin>>n;
    while(n--){
        int i=0, j=1, cont=0;
        vector<int> num;
        while(i<4){
            cin>>a;
            num.push_back(a);
            i++;
        }
        while(j<4){
            if(num.at(j)>num.at(0)){cont++;}
            j++;
        }
        cout<<cont<<endl;
    }
}