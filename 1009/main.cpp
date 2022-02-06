#include <iostream>

using namespace std;

int main() {
    int T = 0, i = 0;

    int a, b, result;

    cin >> T;

    while (T--) {
        cin >> a >> b;

        result = a;
        if (result > 10) { result %= 10; }

        for (i = 0; i < b - 1; i++) {
            result *= a;
            result %= 10;
        }

        if (!result) { result = 10; }

        cout << result << endl;
    }

    return 0;
}
