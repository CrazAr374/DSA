#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main() {
    int n = 29; // Binary: 11101
    cout << "Number of set bits: " << countSetBits(n) << endl; // Output: 4
    return 0;
}
