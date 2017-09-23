#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    ll A[m];
    ll B[m];
    ll K[m];
    // ll L[n+1] = {0};
    ll *L=new ll [n+1]();
    
    for(int i = 0; i < m; i++){
        cin >> A[i] >> B[i] >> K[i];
    }
    for(int i=0;i<m;i++) {
        for(int j=A[i];j<=B[i];j++) {
            L[j] += K[i]; 
        }
    }
    sort(L,L+n+1);
    cout<<L[n];   
    return 0;
}