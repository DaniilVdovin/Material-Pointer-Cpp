#include <iostream>
using namespace std;
int MaxIndex(int* Ar,int n) {
    int mv = 0, mi = 0;
    for (int i = 0; i < n; i++){
        if (mv < Ar[i]) {
            mv = Ar[i]; mi = i;
        }}
    return mi;
}
int MinIndex(int* Ar, int n) {
    int mv = 1000, mi = 0;
    for (int i = 0; i < n; i++) {
        if (mv > Ar[i]) {
            mv = Ar[i]; mi = i;
        }}
    return mi;
}
int main() {
    int n, m, rs = 0, i = 0;
    cin >> n >> m;
    int * N { (int*)calloc(n , sizeof(int)) },
        * M { (int*)calloc(m , sizeof(int)) },
        * RS{ (int*)calloc(rs, sizeof(int)) };
    for (i = 0; i < n; ++i) cin >> N[i];
    for (i = 0; i < m; ++i) cin >> M[i];
    for (i = 0; i < MinIndex(N,n); ++i) {
        rs++; RS = (int*)realloc(RS, rs * sizeof(int));
        RS[rs - 1] = N[i]; }
    for (i = MaxIndex(M, m) + 1; i < m; ++i) {
        rs++; RS = (int*)realloc(RS, rs * sizeof(int));
        RS[rs - 1] = M[i]; }
    for (i = 0; i < rs; i++) cout << RS[i] << ' ';
    free(N); free(M); free(RS);
    return 0;
}
/*
    3 3 3 2 1 3 2 1     = 3 2 2 1
    4 4 2 5 4 6 9 5 8 7 = 5 8 7
    2 2 1 2 2 1         = 1
*/