// 1, 2, 3, 4, 6,....,n

#include <iostream>


int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 5 != 0) {
            cout << i << " ";
            count++;
        }
        if (count == 10) {
            break;
        }
    }

    return 0;
}
