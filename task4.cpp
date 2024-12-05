#include <iostream>

int main() {
    int m, n;

    std::cout << "Введіть кількість рядків (m) і стовпців (n): ";
    std::cin >> m >> n;

    if (m < 0 || n < 0 || m > 100 || n > 100) {
        std::cout << "Неправильні вхідні дані. m і n повинні бути в діапазоні від 0 до 100." << std::endl;
        return 1;
    }

    int num = 0;

    for (int i = 0; i < m; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                std::cout << num++ << "\t";
            }
        } else {
            int temp = num + n - 1;
            for (int j = 0; j < n; ++j) {
                std::cout << temp-- << "\t";
            }
            num += n;
        }
        std::cout << std::endl;
    }

    return 0;
}
