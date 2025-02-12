#include <bits/stdc++.h>
using namespace std;

float TinhDiemUuTien(char khuvuc, int doituong){
    map<char, float> KhuVucUuTien = {{'A', 2.0}, {'B', 1.0}, {'C', 0.5}, {'X', 0.0}};
    map<int, float> DoiTuongUutien = {{1, 2.5}, {2, 1.5}, {3, 1.0}, {0, 0.0}};
    return KhuVucUuTien[khuvuc] + DoiTuongUutien[doituong];
}

void check(char khuvuc, int doituong, int diem1, int diem2, int diem3, int diemchuan){
    float DiemUutien = TinhDiemUuTien(khuvuc, doituong);
    float TongDiem = DiemUutien + diem1 + diem2 + diem2;

    if(TongDiem >= diemchuan && diem1 > 0 && diem2 > 0 && diem3 > 0) cout << "Dau" << "["<< TongDiem <<"]";
    else cout << "Rot" << "["<< TongDiem <<"]";
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int diemchuan;
    cin >> diemchuan;
    int diem1, diem2, diem3;
    cin >> diem1 >> diem2 >> diem3;
    char khuvuc;
    cin >> khuvuc;
    khuvuc = toupper(khuvuc);
    int doituong;
    cin >> doituong;
    check(khuvuc, doituong, diem1, diem2, diem3, diemchuan);
    return 0;
    
}