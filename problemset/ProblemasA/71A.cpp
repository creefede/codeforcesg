#include <iostream>
#include <vector>
using namespace std;
//Mi segundo codigo wii, puede que no esté tan optimo pero me estoy divirtiendo
int main(){
  int n;
  cin>>n;
  vector<string> arr(n);
  for(int i=0;i<n;++i){
    string word;
    cin>>word;
    arr[i] = word;
  }
  vector<string> arr1(n);
  for(int i=0;i<n;++i){
    if(arr[i].length()>10){
      char a = arr[i][0];
      char z = arr[i][arr[i].length()-1];
      int number = arr[i].length()-2;
      string nuevapalabra = a + to_string(number) + z;
      arr1[i] = nuevapalabra;
    }else{
      arr1[i] = arr[i];
    }
  }
  for(int i=0;i<n;++i){
    cout<<arr1[i]<<endl;
  }
  return 0;
}