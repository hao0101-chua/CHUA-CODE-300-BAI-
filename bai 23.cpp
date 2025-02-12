#include <bits/stdc++.h>
using namespace std;

long check(int a){
    if(a < 2) return 0;
    int sum = 0;
    int tmp = a;
    for(int i = 1; i < a; i++){
        if(a % i == 0) sum += i;
    }
    return sum == tmp;
}

void Perfect(int n){
    for(int i = 1; i < n; i++){
        if(check(i)) cout << i << " ";
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n;
    cin >> n;
    Perfect(n);
    return 0;
}