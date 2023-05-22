#include <iostream>
using namespace std;
bool simpl(int* n) {
    for (int i = 2; i <= sqrt(*n); i++)
        if (*n % i == 0) return false;
    return true;
}
int main() {
    int N,Size=0,j=0;
    cin >> N;
    for (int i = 2; i < N; i++)if(simpl(&i))Size++;
    int* array = new int[Size];
    for (int i = 2; i < N; i++) {
        if (simpl(&i)) {
            array[j] = i;
            cout << array[j] << ' '; j++;
        }
    }
    delete(array);
    return 0;
}
/*
    5 = 2 3
    10 = 2 3 5 7
    20 = 2 3 5 7 11 13 17 19
*/