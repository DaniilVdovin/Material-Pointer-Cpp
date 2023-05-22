#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void fun(float* R, float* H, float* Volume, float* Square) {
    *Volume = M_PI * powf(*R,2.0) * *H;
    *Square = 2 * M_PI * *R * (*R+*H);
}
int main() {
    float R, H, Volume, Square;
    cin >> H >> R;
    fun(&R, &H, &Volume, &Square);
    cout.precision(2);
    cout << fixed << endl << Volume << " " << Square << " " << endl;
    return 0;
}