#include<bits/stdc++.h>
using namespace std;

long aVeryBigSum(vector<long> ar){
    int size = ar.size();
    long sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + ar[i];
    }
    return sum;
}


int main(){
    
    int n;
    cin >> n;
    
    vector<long> ar;
    
    for(int i = 0; i<n; i++){
        long x;
        cin >> x;
        ar.push_back(x);
    }
    
    long sum = aVeryBigSum(ar);
    cout << sum;
}
