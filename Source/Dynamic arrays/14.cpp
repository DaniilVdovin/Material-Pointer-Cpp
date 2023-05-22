#include <iostream>
using namespace std;
int main() {
    int n, m, rs = 0, i = 0;
    cin >> n >> m;
    int* N{ (int*)calloc(n , sizeof(int)) },
        * M{ (int*)calloc(m , sizeof(int)) },
        * RS{ (int*)calloc(rs, sizeof(int)) };
    for (i = 0; i < n; ++i) {
        cin >> N[i];
        if (N[i] > 0) {
            rs++; RS = (int*)realloc(RS, rs * sizeof(int));
            RS[rs - 1] = N[i];
        }}
    for (i = 0; i < m; ++i) {
        cin >> M[i];
        if (M[i] < 0) {
            rs++; RS = (int*)realloc(RS, rs * sizeof(int));
            RS[rs - 1] = M[i];
        }}
    for (i = 0; i < rs; i++) cout << RS[i] << ' ';
    free(N); free(M); free(RS);
    return 0;
}
/*
    4 4 5 -4 2 -2 -1 2 -3 4 = 5 2 -1 -3
    2 2 -1 2 -2 1           = 2 -2
    2 2 -1 1 1 -1           = 1 -1
*/