#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void fun(float* A, float* B, float* H, float* Volume, float* Square) {
    *Volume = *A * *B * *H;
    *Square = 2*(*A**B + *A**H + *B**H);
}
int main() {
    float A, B, H, Volume, Square;
    cin >> A >> B >> H;
    fun(&A, &B, &H, &Volume,&Square);
    cout.precision(2);
    cout << fixed << endl << Volume << " " << Square << " " << endl;
    return 0;
}