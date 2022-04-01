#include <iostream>

using namespace std;

int gcd(int m, int n) {
    if (m % n == 0) {
        return n;
    } else if (m % n > 0) {
        return gcd(n, m % n);
    }
}

int lcm(int m, int n) {
    return (m * n) / gcd(m, n);
}

int main(){
    int M, N;
    cin >> M >> N;
    cout << gcd(M, N) << endl;
    cout << lcm(M, N) << endl;
    return 0;
}