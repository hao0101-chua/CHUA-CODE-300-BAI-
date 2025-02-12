#include <bits/stdc++.h>
using namespace std;

/*
ấu trúc (struct) Time được dùng để lưu trữ một thời điểm trong ngày với:
hour (giờ)
minute (phút)
second (giây)
truyền tham số vào các hàm mà không cần sử dụng nhiều biến rời rạc.
*/
struct Time {
    int hour;
    int minute;
    int second;
};


Time timeDifference(Time t1, Time t2) {
    Time diff; 
    /*
    Khi khai báo Time diff;, biến diff sẽ có ba thành viên:
    diff.hour (giờ)
    diff.minute (phút)
    diff.second (giây)
    */

    //đổi toàn bộ thời gian thành giây để dễ tính toán
    int total_seconds_1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
    int total_seconds_2 = t2.hour * 3600 + t2.minute * 60 + t2.second;

    int total_diff = total_seconds_2 - total_seconds_1;

    diff.hour = total_diff / 3600;
    total_diff %= 3600;
    diff.minute = total_diff / 60;
    diff.second = total_diff % 60;

    return diff;
}



int main() {
    Time t1, t2, diff;

    cout << "Nhap gio, phut, giay [1]: ";
    cin >> t1.hour >> t1.minute >> t1.second;

    cout << "Nhap gio, phut, giay [2]: ";
    cin >> t2.hour >> t2.minute >> t2.second;

    diff = timeDifference(t1, t2);
    /*
    Hàm timeDifference(Time t1, Time t2) sẽ tính toán sự chênh lệch giữa hai thời điểm và trả về một biến kiểu Time chứa kết quả.
    Biến diff sẽ nhận giá trị trả về từ hàm.
    */

    cout << "Hieu thoi gian: " << diff.hour << " gio " 
         << diff.minute << " phut, " 
         << diff.second << " giay" << endl;

    return 0;
}


