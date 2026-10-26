#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    if (n == 0 && m == 0) {
        std::cout << 0;
        return 0;
    }

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }

    

    return 0;
}
