#include <bits/stdc++.h>
using namespace std;

int is_leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int day_of_year(int day, int month, int year){
    int sum = (int)(30.42 * (month - 1)) + day;
    if(month == 2 || is_leap_year(year) && month > 2) sum += 1; // Nếu tháng 2 hoặc tháng lớn hơn 2 trong năm nhuận, cộng thêm 1 ngày
    if(month > 2 && month < 8) sum -= 1; // Nếu tháng thuộc khoảng từ tháng 3 đến tháng 7, trừ đi 1 ngày
    return sum;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int day, month, year;
    cin >> day >> month >> year;
    cout << "ngay thu " << day_of_year(day, month, year) << " trong nam " << year;
}