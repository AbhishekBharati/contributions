#include<bits/stdc++.h>
using namespace std;

#define int long long

int arr[1001000];

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i] * (i + 1) * (n - i);
    }
    cout << sum << "\n";
    
    return 0;
}
