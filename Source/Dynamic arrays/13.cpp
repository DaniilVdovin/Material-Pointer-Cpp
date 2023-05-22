#include <iostream>
using namespace std;
int main() {
    int n, i = 0;
    cin >> n;
    int* N{ (int*)calloc(n , sizeof(int)) };
    for (i = 0; i < n; ++i) cin >> N[i];
    for (i = 0; i < n; ++i) N[i]*=-1;
    for (i = 0; i < n; i++) cout << N[i] << ' ';
    free(N);
    return 0;
}
/*
    5 1 -2 3 -4 5      = -1 2 -3 4 -5
    6 -1 -2 -0 5 3 -9  = 1 2 0 -5 -3 9
    2 0 -0             = 0 0
*/