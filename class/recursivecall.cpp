#include <iostream>

using namespace std;

int sum(int n) {
    if (n < 2) {
        return 1;
    }
    return sum(n - 1) + sum(n - 2);
}

int main() {
    cout << sum(5000) << endl;
    return 0;
}
