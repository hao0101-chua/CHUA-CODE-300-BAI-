#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b){
    while(b != 0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int BCNN(int a, int b){
    int max = (a > b) ? a : b;
    int tmp = 0;
    while(1){
        if(max % a == 0 && max % b == 0){
            tmp = max;
            break;
        }
        max++;
    }
    return tmp;
}

int BCNN2(int a, int b){
    return a * b / UCLN(a, b);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b;
    cin >> a >> b;
    cout << UCLN(a, b) << " ";
    cout << BCNN(a, b) << " ";
    cout << BCNN2(a, b);
    return 0;
}