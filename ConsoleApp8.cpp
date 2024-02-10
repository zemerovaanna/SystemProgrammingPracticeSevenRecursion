#include <iostream>
using namespace std;

int countRepresentations(int n) {
    if (n <= 1)
    {
        return 0;
    }
    int count = 0;;
    for (int i = 1; i < n; i++) {
        count += countRepresentations(n - i);
    }
    return count + 1;
}

int main() {
    setlocale(LC_ALL, "ru");
    int num;
    cout << "Пожалуйста, натуральное число: ";
    cin >> num;
    cout << "Итог:" << countRepresentations(num) << endl;
    return 0;
}
