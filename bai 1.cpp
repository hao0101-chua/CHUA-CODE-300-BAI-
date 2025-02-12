#include <bits/stdc++.h>
using namespace std;
#define PI 3.141593


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    float s, R = 0.0, V = 0.0;
    cin >> s;
    R = sqrt(s/(4 * PI));
    V = (4/3) * PI * pow(R, 3);
    cout << V;
    return 0;
}