#include <bits/stdc++.h>
using namespace std;

// hàm kiếm tra năm nhuần
int is_leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// hàm lấy số ngày trong tháng
int get_days_in_month(int month, int year){
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month == 2 && is_leap_year(year)) return 29; // kiểm tra năm nhuần để gán thành 29
    return days_in_month[month - 1];
    /*
    Nếu không phải tháng 2 hoặc không phải năm nhuận, trả về số ngày của tháng từ mảng days_in_month.
    Vì mảng bắt đầu từ 0, nên chúng ta trừ đi 1 (month - 1) để lấy đúng giá trị.
    */
}

// hàm in lịch trực
void print_schedule(int year, int start_day, int month){
    vector<char> duty = {'A', 'B', 'C', 'D', 'E'}; // tạo một vecto chứa người phân công
    cout << " Sun    Mon    Tue    Wed    Thu    Fri    Sat" << endl;
    int days = get_days_in_month(month, year); // gọi hàm số ngày trong tháng
    int current_duty = 0; // gán số thứ tự người trực trong vecto

    for(int i = 0; i < start_day; i++) cout << "     "; // in khoảng trắng trước ngày bắt đầu trực
    
    // dùng vòng for in từng ngày trong tháng
    for(int day = 1; day <= days; day++){
        if(start_day % 7 == 0) cout << endl; // nếu là chủ nhật thì xuống dòng
        if(start_day % 7 == 0) cout << setw(2) << day << "[ ]"; // in nhừng ngày không có người trực
        else{
            cout << setw(4) << day << "[" << duty[current_duty] << "]";
            current_duty = (current_duty + 1) % 5; // cặp nhật mới lại người trực
        } // in ngày có người trực
        start_day++;
    } 
    cout << endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int year, start_day, month;
    cin >> year >> start_day >> month;
    int temp_start_day = start_day;
    /*
    temp_start_day: Biến tạm để tính thứ của ngày đầu tiên trong tháng cần in.
    Vòng lặp for: Lặp qua tất cả các tháng từ tháng 1 đến tháng (month - 1) để tính tổng số ngày đã trôi qua.
    Công thức cập nhật temp_start_day:
    */
    for(int i = 1; i < month; i++) temp_start_day = (temp_start_day + get_days_in_month(i, year)) % 7; /*Cộng số ngày của tháng i vào temp_start_day.
                                                                                                        Lấy mod 7 để giữ giá trị trong phạm vi [0, 6] (tương ứng với các thứ trong tuần).*/
    print_schedule(year, temp_start_day, month);
    return 0;
}