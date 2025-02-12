#include <bits/stdc++.h>
using namespace std;

float dientich(float x1, float y1, float x2, float y2, float x3, float y3){
    float S = 0.5 * fabs((x1*y2 - x2*y1) + (x2*y3 - x3*y2) + (x1*y3 - x3 *y1));
    return S;
}

void kiemtra(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4){
    float Sum = dientich(x1, y1, x2, y2, x4, y4) + dientich(x2, y2, x3, y3, x4, y4) + dientich(x1, y1, x3, y3, x4, y4);
    if(Sum > dientich(x1, y1, x2, y2, x3, y3)) cout << "M nam ngoai tam giac ABC" << endl;
    else if(Sum == dientich(x1, y1, x2, y2, x3, y3)) cout << "M nam tren tam giac ABC" << endl;
    else cout << "M nam trong tam giac ABC" << endl;

}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    float x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    kiemtra(x1, y1, x2, y2, x3, y3, x4, y4);
    return 0;
}