#include <iostream>

int main() {
int m, n;
std::cout << "Введіть кількість рядків (m) і стовпців (n): ";
std::cin >> m >> n;
if (m < 1 || n < 1 || m > 100 || n > 100) {
std::cerr << "Помилка: m та n повинні бути в межах від 1 до 100" << std::endl;
return 1;
}
for (int i = 0; i < m; ++i) {
for (int j = 0; j < n; ++j) {
std::cout << '*';
}
std::cout << std::endl;
}
return 0;
}
