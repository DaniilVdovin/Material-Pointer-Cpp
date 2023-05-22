#include <iostream>
using namespace std;
int main() {
    int n,rs=0,i=0;
    cin >> n;
    int *N { (int*)calloc(n , sizeof(int)) },
        *RS{ (int*)calloc(rs, sizeof(int)) };
    for (i = 0; i < n; ++i) cin >> N[i];
    for (i = 0; i < n; ++i){
        if (N[i] > 0) {
            rs++; RS = (int*)realloc(RS, rs * sizeof(int));
            RS[rs - 1] = N[i];
        }}
    for (i = 0; i < rs; i++) cout << RS[i] << ' ';
    free(N); free(RS);
    return 0;
}
/*
    3 -1 -2 3      = 3
    4 -2 -10 1 55  = 1 55
    4 2 10 -1 -55  = 2 10
*/