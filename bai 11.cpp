#include <bits/stdc++.h>
using namespace std;
#include <time.h>

// ham chua lua chon cua may
char getcomputerchoice(){
    char choice[] = {'k', 'b', 'd'}; // tao mang chua chua ki tu lua chon cua may
    return choice[rand() % 3]; // tra ve radom trong mang
}

// ham check ban voi may
string check(char player, char computer){

    if(player == computer) return "ban hoa may";
    if((player == 'k' && computer == 'b') || (player == 'b' && computer == 'b') || (player == 'b' && computer == 'k')) return "ban thang";
    return "may thang";
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    srand(time(0)); // Thiết lập seed cho rand() để kết quả ngẫu nhiên mỗi lần chạy.
    char player;

    while(1){

        cin >> player;

        if(player == '0') break;
        // so sanh nhap sai ki tu bo qua code duoi chay lai 
        if(player != 'k' && player != 'b' && player != 'd'){ 
            cout << "chon khong hop le" << endl;
            continue;
        }

        char computer = getcomputerchoice();
        cout << "may tinh chon: " << computer << endl;
        cout << check(player, computer) << endl;

    }
    return 0;
}