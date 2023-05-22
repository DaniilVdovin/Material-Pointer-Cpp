#include <iostream>
#include <math.h>
using namespace std;
int NOD(int n1, int n2)
{
    int div;
    if (n1 == n2)  return n1;
    int d = n1 - n2;
    if (d < 0) { d = -d; div = NOD(n1, d); }
    else div = NOD(n2, d);
    return div;
}
int NOK(int n1, int n2){return n1 * n2 / NOD(n1, n2);}
void fun(int* N1, int* N2, int* max_nod, int* min_nod) {
    *min_nod = NOK(*N1, *N2);
    *max_nod = NOD(*N1, *N2);
}
int main() {
    int N1 , N2, min_nod , max_nod;
    cin >> N1 >> N2;
    fun(&N1, &N2, &min_nod, &max_nod);
    cout.precision(2);
    cout << fixed << endl << min_nod << " " << max_nod << endl;
    return 0;
}