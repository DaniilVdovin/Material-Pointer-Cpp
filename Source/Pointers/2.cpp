#include <iostream>
#include <math.h>
using namespace std;
void fun(float* Perimeter, float* Square, float* Side1, float* Side2, float* Side3) {
    *Perimeter = *Side1 + *Side2 + *Side3;
    *Square = sqrtf(*Perimeter/2 * (*Perimeter/2 - *Side1) * (*Perimeter/2 - *Side2) * (*Perimeter/2 - *Side3));
}
int main() {
    float Perimeter, Square, Side1, Side2, Side3;
    cin >> Side1 >> Side2 >> Side3;
    fun(&Perimeter, &Square, &Side1, &Side2, &Side3);
    cout.precision(2);
    cout << fixed << endl << Perimeter << " " << Square << endl;
    return 0;
}