#include<iostream>
using namespace std;


bool isPalindrome(int x) {
    if(x < 0)return false;
    int quotent = -1, divisor = 10, remainder = -1, givenX = x, resultX = 0;

    while(quotent != 0) {
        quotent = x / divisor;
        remainder = x % divisor;
        resultX *= divisor;
        resultX += remainder;
        x = quotent;
    }
    return resultX == givenX;
}

int main() {
    cout<<isPalindrome(121)<<endl;
    return 0;
}

