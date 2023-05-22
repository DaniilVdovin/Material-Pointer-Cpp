#include <iostream>
#include <math.h>
using namespace std;
void fun(float* A, float* B, float* C, float* Perimeter, float* Square) {
    *Perimeter = *A + *B + *C;
    float p = (*A + *B + *C) / 2;
    *Square = sqrtf(p * (p - *A)* (p - *B)* (p - *C));
}
int main() {
    float A, B, C, Perimeter, Square;
    cin >> A >> B >> C;
    fun(&A, &B, &C, &Perimeter, &Square);
    cout.precision(2);
    cout << fixed << Perimeter << " " << Square << " " << endl;
    return 0;
}