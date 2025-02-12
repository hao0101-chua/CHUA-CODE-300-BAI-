#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

void kiemtra(float a, float b, float c){
    if(((a + b) > c) || ((a + c) > b) || ((b + c) > a)){
        cout << "hop le" << endl;
        if(a == b && a == c && b == c) cout << "tam giac deu" << endl;
        else if((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) cout << "tam giac vuong" << endl;
        else if((a == b && a == c && b != c) || (b == a && b == c && a != c) || (c == a && c == b && a != b)) cout << "tam giac can" << endl;
    }
    else cout << "khong hop le" << endl;
}

float dientich(float a, float b, float c){
    float P = (a + b + c) / 2;
    float S = sqrt(P * (P - a) * (P - b) * (P - c));
    return S;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    float a, b, c;
    cin >> a >> b >> c;
    kiemtra(a, b, c);
    cout << dientich(a, b, c);
    return 0;
}