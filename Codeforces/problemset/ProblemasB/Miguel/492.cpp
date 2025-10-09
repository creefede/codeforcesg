#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    int n, l, a, i = 0;
    double ans, temp;
    vector<int> nums;
    cin>>n>>l;
    int N = n;
    while(n--){
        cin>>a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    ans= l - nums[N-1];
    if(nums[i] > ans){ans=nums[i];}
    while(i<N-1){
        temp=(nums[i+1]-nums[i])/2.0;
        if(temp > ans){
            ans = temp;
        }
        i++;
    }
    cout<<fixed<<setprecision(10)<<ans;
}