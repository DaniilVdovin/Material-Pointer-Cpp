#include <iostream>
using namespace std;
int Fib(int n) {
    return n == 1 || n == 2 ? 1 : Fib(n - 1) + Fib(n - 2);
}
int main() {
    int n;
    cin >> n;
    int* rs{ (int*)calloc(n, sizeof(int)) };
    for (int i = 1; i <= n; ++i) rs[i] = Fib(i);
    for (int i = 0; i <= n; i++) cout << rs[i] << ' ';
    free(rs);
    return 0;
}
/*
5  = 0 1 1 2 3 5
10 = 0 1 1 2 3 5 8 13 21 34 55
15 = 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610
*/