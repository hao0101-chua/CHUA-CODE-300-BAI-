#include <bits/stdc++.h>
using namespace std;

// hàm kiểm tra năm nhuần
int is_leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// hàm kiểm tra ngày tháng năm hợp lệ hay không
int is_valid_date(int day, int month, int year){
    if(year < 1582 || month < 1 || month > 12 || day < 1) return 0;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // tạo một mản chứa số nagyf của các tháng
    if(is_leap_year(year)) days_in_month[1] = 29; // năm nhuần thì tháng 2 thành 29
    return day <= days_in_month[month - 1]; 
    /*
    So sánh ngày (day) với số ngày tối đa của tháng (days_in_month[month - 1]).
    Nếu ngày nhập vào lớn hơn số ngày tối đa của tháng đó → ngày không hợp lệ (return 0).
    Ngược lại, nếu ngày hợp lệ → trả về 1.

    */
}

// hàm thứ trong tuần
const char* calculate_day_of_week(int day, int month, int year){
        int a = (14 - month) / 12;
        int y = year - a;
        int m = month + 12 * a - 2;
        int day_of_week = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
        const char* days[] = {"Chủ nhật", "Thứ hai", "Thứ ba", "Thứ tư", "Thứ năm", "Thứ sáu", "Thứ bảy"}; // tạo mảng chứ các thứ trong tuần
        return days[day_of_week];
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int day, month, year;
    cin >> day >> month >> year;
    if(is_valid_date(day, month, year)){
        cout << "hop le!" << endl;
        cout << calculate_day_of_week(day, month, year) << endl;
    }else cout << "khong hop le" << endl;
    return 0;
}