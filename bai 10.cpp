#include <bits/stdc++.h>
using namespace std;

bool isValidSIN(string sin){
    
    if(sin.length() != 9 || !isdigit(sin[0])) return false;
    // kiem tra SIN co dung 9 chu so khong 
    // neu khong du hoac khong phai so tra ve false

    long sum1 = 0, sum2 = 0, res = 1, totalWeight = 0;

    int checkDigit = sin[8] - '0'; // kiem tra chu so cuoi cua SIN

    // duyet tung chu so cua SIN
    // neu chan cong vao sum1
    // neu le nhan 2 cong tu chu so vao sum 2

    for(int i = 0; i < 8; i++){
        int tmp = sin[i] - '0';

        if(i % 2 == 0){
            sum1 += tmp; 
        }else{
            res = tmp * 2;
            sum2 += (res / 10) + (res % 10);
        }
    }
    
    totalWeight = sum1 + sum2; 
    return (totalWeight + checkDigit) % 10 == 0; // tra ve tong sum1 sum2 co chia het cho 10 khong

}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string sin;
    while(1){

        //cout << "SIN (nhap 0 de thoat): ";
        cin >> sin;
        if(sin == "0") break; // SIN bang 0 thoat chuong trinh

        if(isValidSIN(sin)) cout << "SIN hop le" << endl;
        else cout << "SIN khong hop le" << endl;

        return 0;
    }
}