#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

void check(int n){

    int degree = n / 60;
    
    if(degree < 90) cout << "x thuoc goc vuong thu 1" << endl;
    else if(degree >= 90 && degree < 180) cout << "x thuoc goc vuong thu 2" << endl;
    else if(degree >= 180 && degree < 270) cout << "x thuoc goc vuong thu 3" << endl;
    else cout << "x thuoc goc vuong thu 4" << endl;

    float radian = (PI * degree) / 180;
    float Cosx = cos(radian);

    cout << "cos(x) = " << Cosx << endl;

}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    check(n);
    return 0;
}