#include <bits/stdc++.h>
using namespace std;

// hàm kiểm tra năm nhuần
int is_leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// hàm tính ngày bắt đầu của năm
int get_start_day(int year){
    int a = (14 - 1) / 12;
    int y = year - a;
    int m = 1 + 12 * a - 2;
    return (1 + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7; // áp dụng công thức zeller
}

// hàm in lịch: start_day ngày bắt đầu, days_in_month là tổng số ngày của tháng
void print_month(int start_day, int days_in_month){
    cout << " S  M  T  W  T  F  S" << endl; // in thứ của tuần
    for(int i = 0; i < start_day; i++) cout << "   "; // in khoảng trống trước ngày đầu tiên
    for(int day = 1; day <= days_in_month; day++){
        printf("%3d", day); // in ngày
        if((start_day + day) % 7 == 0) cout << endl; // xuống dòng khi hết tuần
    }
    cout << "\n\n";
}

// hàm in lịch cả năm 
void print_year_celendar(int year){
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(is_leap_year(year)) days_in_month[1] = 29; // điều kiện tháng 2 thành năm nhuần
    int start_day = get_start_day(year); // tính ngày bắt đầu của năm
    // in từng ngày của tháng
    for(int month = 0; month < 12; month++){
        // cho for chạy từ 0 đến 11 để in từng tháng
        cout << "thang " << month + 1 << endl;
        print_month(start_day, days_in_month[month]); // gọi hàm in từng thứ
        start_day = (start_day + days_in_month[month]) % 7; // cập nhật ngày bắt dầu của tháng sau
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int year;
    cin >> year;
    // kiểm tra năm nhập có hợp lệ không
    if(year < 1582){
        cout << "khong hop le";
        return 0;
    }
    // gọi hàm in lịch của cả năm 
    cout << "in lich của năm " << year << endl;
    print_year_celendar(year);
    return 0;
}