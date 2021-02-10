#include <iostream>

using namespace std;

int fac_rec(int n) {
    return n == 0 ? 1 : n * fac_rec(n - 1);
}

int main() {
    cout << "Enter number to get factorial: ";
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is " << fac_rec(n) << endl;
}
