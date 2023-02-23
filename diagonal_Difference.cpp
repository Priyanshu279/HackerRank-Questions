#include<bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr){
    
    int d1Sum = 0;
    int d2Sum = 0;
    int size = arr.size();

    for(int i = 0; i<size; i++){
       d1Sum = d1Sum+arr[i][i];
       d2Sum = d2Sum+arr[i][size-1-i];
    }
    return abs(d1Sum-d2Sum);
}

int main(){
    
    int n;
    cin >> n;

    vector<vector<int>> arr(n,vector<int>(n));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    int result = diagonalDifference(arr);
    cout << result;
}
