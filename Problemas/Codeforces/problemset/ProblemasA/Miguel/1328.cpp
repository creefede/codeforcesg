#include<iostream>
using namespace std;
int main() {
    int n, a, b, ab, cont;
    cin >> n;    
    while (n--) {
        cin>>a>>b;
        ab = a % b;
        cont = (ab == 0) ? 0 : b - ab;
        cout << cont << endl;
    }

    return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
    int n,a,b,i=0,cont = 0;
    cin>>n;
    while(i<n){
        cin>>a>>b;
        while(a%b !=0){
            a++;
            cont++;
        }cout<<cont<<endl;
        i++;
        cont=0;
    }
}
    NO EFICIENTE
*/