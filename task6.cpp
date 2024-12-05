#include <iostream>

int main() {
    int n;
    std::cout << "Введіть висоту сніжинки (1 ≤ n ≤ 100): ";
    std::cin >> n;

    // Перевірка коректності введення
    if (n < 1 || n > 100) {
        std::cout << "Помилка: n має бути в діапазоні від 1 до 100." << std::endl;
        return 1;
    }

    // Малювання сніжинки
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || i + j == n - 1 || i == n / 2) {
                std::cout << "* ";
            } else if (j == n / 2) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
