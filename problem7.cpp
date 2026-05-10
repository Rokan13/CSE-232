#include <iostream>
using namespace std;

int main() {
    int num, org, reverse = 0;
    cin >>num;

    org= num;

    while(num != 0)
        {
        int digit = num%10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(org == reverse)

        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";
}
