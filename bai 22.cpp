#include <bits/stdc++.h>
using namespace std;

long UocSo(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0) sum += i;
    }
    return sum;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    cout << UocSo(n);
    return 0;
}