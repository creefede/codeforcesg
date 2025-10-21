#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>> n;
    cin>> k;
    int total =0;
    vector<int> scores;

    for (int i =0; i < n; i++){
    int score;
    cin>> score;
    scores.push_back(score);
    }
    for(int i =0; i < n; i++){
        if(scores[i] >= scores[k-1] && scores[i] > 0){
            total++;
        }
    }

    cout<<total;

return 0;
}
