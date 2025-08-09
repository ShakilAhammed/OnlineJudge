#include<iostream>
#include<vector>

using namespace std;

 bool isPowerOfTwo(int n) {
    return n > 0 && !(n & (n - 1));
}

int main(){
    cout<< "Check result: " << (isPowerOfTwo(5) ? "True" : "False") << endl;
}