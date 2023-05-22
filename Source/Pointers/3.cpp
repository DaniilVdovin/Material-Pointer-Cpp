#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void fun(float* Perimeter, float* Square, float* Radius) {
    *Perimeter = 2 * M_PI * *Radius;
    *Square = M_PI*powf(*Radius,2.0);
}
int main() {
    float Perimeter, Square, Radius;
    cin >> Radius;
    fun(&Perimeter, &Square, &Radius);
    cout.precision(2);
    cout << fixed << endl << Perimeter << " " << Square << endl;
    return 0;
}