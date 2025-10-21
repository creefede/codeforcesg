#include <bits/stdc++.h>
#define fore(i,l,r) for(int i=(int)l; i<= (int)r; ++i)
#define pb push_back
#define sz(v) int(v.size())
using namespace std;
typedef vector<int> vi;
//O(n)
//pr contiene # primos
//lp[i]==i si i es primo
//si no, lp[i] es el minimo factor primo de i

//Estas son variables globales
const int nax = 1e7;
int lp[nax+1]; //Se define un array, no un vector, tiene memoria estatica, es porque es mas rapido(creo)
vi pr; //Si se usara un array y no un vector seria mas rapido

//La criba es void porque modificará variables globales, no devolverá nada
void criba(){
  fore(i,2,nax-1){
    if(lp[i]==0){
      lp[i]=i;
      pr.pb(i);
    }
    for(int j=0,mult=i*pr[j];j<sz(pr)&&pr[j]<=lp[i] && mult<nax;++j,mult=i*pr[j]) lp[mult]=pr[j];
  }
}