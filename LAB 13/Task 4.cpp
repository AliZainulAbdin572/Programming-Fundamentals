#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 40, y = 100;

    cout << "Before Swapping: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After Swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
