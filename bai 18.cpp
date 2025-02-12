#include <bits/stdc++.h>
using namespace std;

void check(int g){
    int weeks = g / (24 * 7);
    int days = (g % (24 * 7)) / 24;
    int hours = (g % (24 * 7)) % 24; 
    cout << weeks << " " << days << " " << hours;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int g;
    cin >> g;
    check(g);
    return 0;
}