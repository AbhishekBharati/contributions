#include<bits/stdc++.h>
using namespace std;

#define int long long

int arr[1000100];

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int prevSum = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        prevSum = (prevSum + 1)*arr[i];
        sum += prevSum;
    }
    
    cout << sum << "\n";
    
    return 0;
}
