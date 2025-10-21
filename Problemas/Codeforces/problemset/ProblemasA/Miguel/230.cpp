#include<iostream>
#include<vector>
#include<list>
#include <algorithm>
using namespace std;
int main(){
    int a, b, c,d, i=0,res=0,j=0;
    cin>>a>>b;
    vector<int> Cs(b);
    vector<int> Ds(b);
    while(i<b){
        cin>>c>>d;
        Cs[i]=c;
        Ds[i]=d;
        i++;
    }i=0;
    while (i < b - 1) {
        j = i + 1;
        while (j < b) {
            if (Cs[i] > Cs[j]) {
                swap(Cs[i], Cs[j]);
                swap(Ds[i], Ds[j]);
            }
            j++;
        }
        i++;
    }i = 0;
    while (i < b) {
        if (a > Cs[i]) {
            a += Ds[i];
        } else {
            cout << "NO";
            res = 1;
            break;
        }
        i++;
    }
    if (res == 0) {
        cout << "YES";
    }
    return 0;
}
