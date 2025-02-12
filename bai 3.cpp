#include <bits/stdc++.h>
using namespace std;

float khoangcach(float x1, float y1, float x2, float y2){
    float AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return AB;
}

void sosanh(float x1, float y1, float x2, float y2, float r){
    if(khoangcach(x1, y1, x2, y2) > r) cout << "M nam ngoai dưuong tron" << endl;
    else if(khoangcach(x1, y1, x2, y2) == r) cout << "M nam tren duong tron" << endl;
    else cout << "M nam trong duong tron" << endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    float x1, y1, x2, y2, r;
    cin >> x1 >> y1 >> x2 >> y2 >> r;
    sosanh(x1, y1, 2, y2, r);
    return 0;
}