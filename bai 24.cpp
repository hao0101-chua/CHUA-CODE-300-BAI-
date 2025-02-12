#include <bits/stdc++.h>
using namespace std;

unsigned long count_dight(unsigned long n){
    int count = 0;
    while(n != 0){
        count++;
        n /= 10;
    }
    return count;
}

void last_fist_dight(unsigned long n){
    int last = n % 10;
    cout << last << " la chu so cuoi cung cua n" << endl;
    while(n >= 10){
        n /= 10;
    }
    cout << n << " la chu so dau tien cua n" << endl;
}

void sum_reversed_dight(unsigned long n){
    int sum = 0;
    int reversed = 0;
    while(n != 0){
        sum += n % 10;
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    cout << "tong cua cac chu so cua n: " << sum << endl;
    cout << "so nghich dao cua n: " << reversed << endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    unsigned long n;
    cin >> n;
    cout << "n co " << count_dight(n) << " chu so" << endl;
    last_fist_dight(n);
    sum_reversed_dight(n);
    return 0;
}