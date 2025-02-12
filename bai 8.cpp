#include <bits/stdc++.h>
using namespace std;
#include <cmath>

void ptb2(float a, float b, float c){
    float delta = b*b - 4*a*c;
    if(a == 0){
        if(b == 0 && c == 0) cout << "ptb1 vn";
        else if(b == 0 && c != 0) cout << "ptb1 vsn";
        else{
            float x = (-c) / b;
            cout << fixed << setprecision(2) << x;
        }
    }else{
        if(delta < 0){
            float x1 = ((-b) + sqrt(delta)) / (2*a);
            float x2 = ((-b) - sqrt(delta)) / (2*a);
            cout << x1 << " " << x2;
        }
        else if(delta == 0){
            float x = (-b) / (2*a);
            cout << fixed << setprecision(2) << x;
        }else{
            float x1 = ((-b) + sqrt(delta)) / (2*a);
            float x2 = ((-b) - sqrt(delta)) / (2*a);
            cout << fixed << setprecision(2) << x1 << " " << fixed << setprecision(2) << x2;
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b, c;
    cin >> a >> b >> c;
    ptb2(a, b, c);
    return 0;
}