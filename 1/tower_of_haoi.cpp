#include <iostream>

using namespace std;

void print_steps(int n, char start, char end, char aux) {
    if (n != 1) {
        print_steps(n - 1, start, aux, end);
        cout << "Move disk " << n << " from tower " << start << " to tower " << end << endl;
        print_steps(n - 1, aux, end, start);
    } else {
        cout << "Move disk 1 from tower " << start << " to tower " << end << endl;
    }
}

int main() {
    cout << "Enter number of disks: ";
    int n;
    cin >> n;
    print_steps(n, 'A', 'C', 'B');
    return 0;
}
