#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//find the first index for a number equal or higher to x
//Time complexity: O(log(n))

int lowerBound(vector<int> &arr, int x) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}


int main() {
    vector<int> arr = { 2, 3, 4, 10, 40 };
    int x = 10;
    int result = lowerBound(arr, x);
    cout<<result;
    cout<<endl;
    //--------------------------------------------------------------
    // THEY BOTH WORK THE SAME
    int count = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    cout<<count;
    return 0;
}