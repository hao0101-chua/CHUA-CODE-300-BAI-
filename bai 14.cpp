#include <bits/stdc++.h>
using namespace std;

// hàm kiểm tra năm nhuần
int is_leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// hàm xác định số ngày trong tháng
int days_int_month(int month, int year){
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // tạo một mảng chứa số ngày của tháng
    if(is_leap_year(year) && month == 2) return 29;
    return days[month - 1];
    /*
    Do mảng days[] có chỉ mục bắt đầu từ 0, nên:
    days[0] là số ngày của tháng 1 (31 ngày).
    days[1] là số ngày của tháng 2 (28 ngày hoặc 29 nếu là năm nhuận).
    days[2] là số ngày của tháng 3 (31 ngày)....
    days[11] là số ngày của tháng 12 (31 ngày).
*/
}

/* hàm tìm ngày hôm trước
Giảm day đi 1.
Nếu ngày trở thành 0 (nghĩa là lùi về tháng trước):
Giảm tháng (month--).
Nếu tháng trở thành 0 (lùi sang năm trước), đặt tháng = 12 và giảm năm (year--).
Cập nhật day thành ngày cuối cùng của tháng mới.
*/
void previous_day(int &day, int &month, int &year){
    day--;
    if(day < 1){
        month--;
        if(month < 1){
            month = 12;
            year--;
        }
        day = days_int_month(month, year);
    }
}

/* hàm tìm ngày hôm sau
Tăng day lên 1.
Nếu ngày vượt quá số ngày tối đa của tháng hiện tại:
Đặt day = 1, tăng month++.
Nếu tháng vượt quá 12, đặt month = 1 và tăng year++.
*/
void next_day(int &day, int &month, int &year){
    day++;
    if(day > days_int_month(month, year)){
        day = 1;
        month++;
        if(month > 12){
            month = 1;
            year++;
        }
    }
    
}



int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int day, month, year;
    cin >> day >> month >> year;

    cout << "hom qua: ";
    int prev_d = day, prev_m = month, prve_y = year;
    previous_day(prev_d, prev_m, prve_y);
    cout << prev_d << " " << prev_m << " " << prve_y << endl;

    cout << "hom sau: ";
    int next_d = day, next_m = month, next_y = year;
    next_day(next_d, next_m, next_y);
    cout << next_d << " " << next_m << " " << next_y << endl;

    return 0;
}