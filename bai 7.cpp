#include <bits/stdc++.h>
using namespace std;

void ptb1(float a, float b){
    if(a == 0 && b == 0) cout << "ptvn";
    else if(a == 0 && b != 0) cout << "ptvs";
    else{
        float x = -b / a;
        cout << fixed << setprecision(2) << x;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    float a, b;
    cin >> a >> b;
    ptb1(a, b);
    return 0;
}