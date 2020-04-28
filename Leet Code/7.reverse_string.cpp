//Author : Shakil Ahammed

//Problem link - https://leetcode.com/problems/reverse-integer/


#include <iostream>
#include<stdexcept>
using namespace std;

const int GUN = 10;
const int RANGE_FROM = ~( -1u >> 1 );
const int RANGE_TO = -1u >> 1;

bool isIn32BitRange(long long num)
{
    return num >= RANGE_FROM && num <= RANGE_TO;
}

int getReverse(long long n)
{
    long long sum = n % GUN;

    while (n < -9 || n > 9)
    {
        if (n % 10 == n)    
        {
            break;
        }
        else
        {
            n = n / 10;
        }
        
        sum = sum * GUN + n % 10;
        if(!isIn32BitRange(sum))return 0;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << getReverse(n) << endl;
    return 0;
}