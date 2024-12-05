#include <iostream>
#include <vector>
#include <iomanip>

void fillSpiral(int m, int n) {
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));

    
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    int num = 0; 

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = num++;
        }
        ++top;

        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = num++;
        }
        --right;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = num++;
            }
            --bottom;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = num++;
            }
            ++left;
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << std::setw(4) << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    int m, n;
    std::cout << "Введіть кількість рядків (m) та стовпців (n): ";
    std::cin >> m >> n;

    if (m < 1 || n < 1 || m > 100 || n > 100) {
        std::cout << "Некоректні вхідні дані. 1 ≤ m, n ≤ 100.\n";
        return 1;
    }

    fillSpiral(m, n);
    return 0;
}
