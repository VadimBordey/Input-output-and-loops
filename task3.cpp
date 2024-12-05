#include <iostream>
#include <iomanip>

int main() {
    int m, n;
    std::cout << "Введіть кількість рядків (m) і стовпців (n): ";
    std::cin >> m >> n;

    if (m < 1 || m > 100 || n < 1 || n > 100) {
        std::cout << "Помилка: m та n мають бути в діапазоні від 1 до 100.\n";
        return 1;
    }

    int counter = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << std::setw(3) << counter++;
        }
        std::cout << '\n';
    }

    return 0;
}
