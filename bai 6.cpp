#include <bits/stdc++.h>
using namespace std;

void kiemtra(int a, int b, int c){
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a > c){
        int tmp = a;
        a = c;
        c = tmp;
    }
    if(b > c){
        int tmp = b;
        b = c;
        c = tmp;
    }
    cout << a << " " << b << " " << c;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b, c;
    cin >> a >> b >> c;
    kiemtra(a, b, c);
    return 0;
}
