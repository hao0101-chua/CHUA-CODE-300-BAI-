#include <bits/stdc++.h>
using namespace std;

void khoangcach(float x1, float y1, float x2, float y2){
    float AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << AB;
}


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    khoangcach(x1, y1, x2, y2);
    return 0;
}