#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a, b, c, d, i =0;
    vector<int> nums;
    while(i<4){
        cin>>d;
        nums.push_back(d);
        i++;
    }
    sort(nums.begin(),nums.end());
    a = nums.at(3) - nums.at(0);
    b = nums.at(3) - nums.at(1);
    c = nums.at(3) - nums.at(2);

    cout<<a<<" "<<b<<" "<<c;
}