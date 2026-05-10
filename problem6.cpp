#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;

    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    cout << "Reversed number = " << reverse;

    return 0;
}
