#include <iostream>

int main() {
    double number_1;
    double number_2;
    double result;
    char function;
    std::cout << "Enter number:";
    std::cin >> number_1;
    std::cout << "Enter the function you want to use:";
    std::cin >> function;
    std::cout << "Enter second number:";
    std::cin >> number_2;

    switch (function) {
        case '+':
            result = number_1 + number_2;
            std::cout << "Result:" << result << std::endl;
            break;

        case '-':
            result = number_1 + number_2;
            std::cout << "Result:" << result << std::endl;
            break;

        case '*':
            result = number_1 + number_2;
            std::cout << "Result:" << result << std::endl;
            break;

        case '/':
            result = number_1 + number_2;
            std::cout << "Result:" << result << std::endl;
            break;
    }

}
