#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void fun(float* A, float* B,  float* Side1, float* Side2) {
    *B = (atanf(*Side2 / *Side1)*180)/M_PI;
    *A = 90 - *B;
}
int main() {
    float A, B, Side1, Side2;
    cin >> Side1 >> Side2;
    fun(&A, &B, &Side1,&Side2);
    cout.precision(2);
    cout << fixed << endl << A << " " << B << " " << 90.00 << endl;
    return 0;
}