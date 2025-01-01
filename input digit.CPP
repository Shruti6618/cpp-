#include <iostream.h>

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
	cout << i * i << " ";
    }

    return 0;
}
