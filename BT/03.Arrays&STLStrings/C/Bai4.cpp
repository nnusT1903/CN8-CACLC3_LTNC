#include<bits/stdc++.h>

using namespace std;

signed main(){
    int n;
    cin >> n;
    n++;
    for (int i = 1; i <= n; i++){
        int C = 1;
        for (int j = 1; j <= i; j++){
            cout<< C<<" ";
            C = C * (i - j) / j;
        }
        cout<<endl;
    }
    return 0;
}