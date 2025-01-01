//2  5  10  .......n
#include <iostream.h>

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int num = 2;
    for (int i = 1; i <= N; ++i) {
	cout << num << " ";
	num += i + 1;

    }

    return 0;
}
