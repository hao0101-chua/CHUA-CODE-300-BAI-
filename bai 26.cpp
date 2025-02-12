#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b){
    while(b != 0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return abs(a);
}

void simplify_fraction(int &numerator, int &denominator){
    int divisor = UCLN(numerator, denominator);

    if(denominator < 0){
        numerator /= -divisor;
        denominator /= -divisor;
    }else{
        numerator /= divisor;
        denominator /= divisor;
    }

    if(denominator == 0){
        cout << "mau so khong bang 0!" << endl;
    }

    if(denominator == 1) cout << "rut gon: " << numerator << endl;
    else cout << "rut gon: " << numerator << "/" << denominator << endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int numerator, denominator;
    cin >> numerator >> denominator;
    simplify_fraction(numerator, denominator);
    return 0;
}
