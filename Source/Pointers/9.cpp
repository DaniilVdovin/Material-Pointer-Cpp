#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int gcd(int a, int b) {
    a = abs(a), b = abs(b);
    if (b == 0)return a;
    else return gcd(b, a % b);
}
void fun(int* N1, int* N2) {
    int nod = gcd(*N1, *N2);
    *N1 /= nod;
    *N2 /= nod;
}
int main() {
    int N1 , N2;
    cin >> N1 >> N2;
    fun(&N1, &N2);
    cout.precision(2);
    cout << fixed << endl << N1 << "/" << N2  << endl;
    return 0;
}