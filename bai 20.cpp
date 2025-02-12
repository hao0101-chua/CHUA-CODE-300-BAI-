#include <bits/stdc++.h>
using namespace std;

int money(int kwh){
    int tien = 1;
    if(kwh <= 100) tien = kwh * 500;
    else if(kwh <= 250) tien = 100 * 500 + (kwh - 100) * 800;
    else if(kwh <= 350) tien = 100 * 500 + 150 * 800 + (kwh - 250) * 1000;
    else tien = 100 * 500 + 150 * 800 + 100 * 1000 + (kwh - 350) * 1500;
    return tien;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int kwh;
    cin >> kwh;
    cout << money(kwh);
    return 0;
}