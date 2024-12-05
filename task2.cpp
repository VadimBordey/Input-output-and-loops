#include <iostream>

int main() {
int m, n, k;
std::cout << "Введіть m, n, k: ";
std::cin >> m >> n >> k;
if (k < 1 || k >= m || k >= n || m > 100 || n > 100) {
std::cerr << "Помилка: введені некоректні данні" << std::endl;
return 1;
}
for (int i = 0; i < m; ++i) {
for (int j = 0; j < n; ++j) {
if (i < k || i >= m - k || j < k || j >= n - k) {
std::cout << '*';
} else {
std::cout << ' ';
}
}
std::cout << std::endl;
}
return 0;
}

