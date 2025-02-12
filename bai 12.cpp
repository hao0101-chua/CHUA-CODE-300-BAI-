#include <bits/stdc++.h>
using namespace std;

void pt2an(int a1, int b1, int c1, int a2, int b2, int c2){
    int D = (a1 * b2) - (a2 * b1);
    int Dx = (b1 * c2) - (b2 * c1);
    int Dy = (a1 * c2) - (a2 * c1); 

    if(D != 0){
        int x = Dx / D;
        int y = Dy / D;
        cout << x << " " << y << endl;
    }
    else if(Dx == 0 && Dy == 0) cout << "ptvn" << endl;
    else cout << "ptvsn" << endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    pt2an(a1, b1, c1, a2, b2, c2);
    return 0;
}