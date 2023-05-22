#include <iostream>
using namespace std;
int main() {
    int n,rs=0,i=0;
    cin >> n;
    int *N { (int*)calloc(n , sizeof(int)) },
        *RS{ (int*)calloc(rs, sizeof(int)) };
    for (i = 0; i < n; ++i) cin >> N[i];
    for (i = 1; i < n; ++i){
        if (N[i] > N[i-1]) {
            rs++; RS = (int*)realloc(RS, rs * sizeof(int));
            RS[rs - 1] = N[i];
        }}
    for (i = 0; i < rs; i++) cout << RS[i] << ' ';
    free(N); free(RS);
    return 0;
}
/*
    5 1 2 3 2 1     = 2 3
    5 1 2 3 2 3     = 2 3 3
    7 7 5 6 1 3 4 5 = 6 3 4 5
*/