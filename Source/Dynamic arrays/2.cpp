#include <iostream>
using namespace std;
int main() {
    int n, d{ 2 }, k{ 4 },s=0;
    cin >> n;
    int* rs{(int*)calloc(s, sizeof(int))};
    while (k <= n)
    {
        while (n%d == 0)
        {
           s++;
           rs = (int*)realloc(rs,(s+1)*sizeof(int));
           rs[s-1] = d;
           n /= d;
        }
        k += 2 * d + 1; d += 1;
    }
    rs[s] = n;
    for (int i = 0; i <= s; i++) cout << rs[i] << ' ';
    free(rs);
    return 0;
}
/*
    6 = 2 3
    66 = 2 3 11
    132 = 2 2 3 11
*/