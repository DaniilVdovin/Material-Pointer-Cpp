#include <iostream>
#include <math.h>
using namespace std;
void fun(float* ROS, float* RIS, float* G, float* Side1, float* Side2) {
    *G = sqrtf(powf(*Side1, 2.0) + powf(*Side2, 2.0));
    *RIS = (*Side1 + *Side2 - *G)/ 2;
    *ROS = *G / 2;
}
int main() {
    float A, B, G, ROS, RIS, Side1, Side2;
    cin >> Side1 >> Side2;
    fun(&ROS, &RIS, &G, &Side1, &Side2);
    cout.precision(2);
    cout << fixed << endl << G << " " << RIS << " " << ROS << endl;
    return 0;
}