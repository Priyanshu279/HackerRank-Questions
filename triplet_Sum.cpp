#include<bits/stdc++.h>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int Alice = 0;
    int Bob = 0;
    
    for(int i = 0; i<3; i++){
        if(a[i]>b[i]){
            Alice++;
        }else if(a[i]<b[i]){
            Bob++;
        }
    }
    return {Alice,Bob};
}


int main(){
    vector <int> a;
    vector <int> b;
    
    for(int i = 0; i<3; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    
     for(int i = 0; i<3; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    
    vector<int> getAnswer = compareTriplets(a,b);
    
    for(int i = 0; i< getAnswer.size(); i++) {
        cout << getAnswer[i] << " ";
    }
}

