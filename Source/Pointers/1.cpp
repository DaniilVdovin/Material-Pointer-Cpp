#include <iostream>
#include <math.h>
using namespace std;
void fun(float* Perimeter, float* Square, float* Diagonal, float* Side) {
    *Perimeter = *Side * 4;
    *Diagonal = sqrtf(2 * *Side * *Side);
    *Square = powf(*Side, 2.0);
}
int main() {
    float Perimeter, Square, Diagonal, Side;
    cin >> Side;
    fun(&Perimeter, &Square, &Diagonal, &Side);
    cout.precision(2);
    cout << endl << fixed << Perimeter << " " << Diagonal << " " << Square << endl;
    return 0;
}
