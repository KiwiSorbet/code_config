#include <iomanip>
#include <iostream>

int firstSum(int);
int triangle(int);

int main() {
    int inputnumber;
    std::cout << "Enter a positive number: ";
    std::cin >> inputnumber;

    if (inputnumber >= 0)
        triangle(inputnumber);
    else
        main();
    return 0;
}

int firstSum(int input) {
    int x = input;
    int y = input;
    int sum;
    for (int i = 0; i < x; i++) {
        sum = 0;
        for (int j = 1; j <= y; j++)
            sum = sum + j * 3;
        std::cout << sum << std::setw(5);
        y = y - 1;
    }
    std::cout << "\n";
    return 0;
}

int triangle(int inputnumber) {
    int i = inputnumber;
    while (i > 0) {
        firstSum(i);
        i = i - 1;
    }
    return 0;
}
