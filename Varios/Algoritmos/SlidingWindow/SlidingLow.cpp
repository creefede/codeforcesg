#include<iostream>
#include<vector>

using namespace std;

//This code works for finding the biggest subarray such that the sum is lower than an index t
//Time complexity: O(n)

int sliding_low(vector<int> &arr, int n, int t){
    int r=0, sum=0, ans=0;
    for(int j=0;j<n;++j){
        while(r<n&&sum+arr[r]<=t){
            sum+=arr[r];
            r++;
        }
        ans=max(ans,r-j);
        sum-=arr[j];
    }return ans;
}

int main(){
    vector<int> arr = {3,1,2,1};
    int n = 4;
    int t = 5;
    int result = sliding_low(arr, n,t);
    cout<<result;
    cout<<endl;
    return 0;
}