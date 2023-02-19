#include<bits/stdc++.h>
using namespace std;

int simpleArraySum(vector<int> arr){
    int sum = 0;
    int size = arr.size();
    for(int i = 0; i<size; i++){
        sum = sum+arr[i];
    }
    return sum;
}


int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << simpleArraySum(arr);
}
