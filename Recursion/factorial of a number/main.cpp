#include <bits/stdc++.h>

using namespace std;

int fun(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    else return (n*fun(n-1));
}

int main() {
    int n;
    cin>>n;
    cout<<fun(n);

    return 0;
}