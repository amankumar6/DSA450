// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long arr[], int n) {
    pair<ll, ll> p;
    ll min = 0, max = 0;
    
    if(n % 2 == 0){
        min = arr[0];
        max = arr[1];
    }
    else{
        min = arr[0];
        max = arr[0];
    }
    
    ll i = 0;
    
    while(i < n - 1){
        if(arr[i] < arr[i + 1]){
            if(arr[i + 1] > max) max = arr[i + 1];
            if(arr[i] < min) min = arr[i];
        }
        else{
            if(arr[i] > max) max = arr[i];
            if(arr[i + 1] < min) min = arr[i + 1];
        }
        i++;
    }
    
    p.first = min;
    p.second = max;
    
    return p;
}