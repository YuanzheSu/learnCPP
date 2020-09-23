// calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int calculate(int x, int y, char op)
{
    switch (op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        std::cout << "You've input an invalide operator. Please input either + - * or /.\n";
        break;
    }
}
int main()
{
    std::cout << "Enter an integer: \n";
    int x{};
    std::cin >> x;
    std::cout << "Enter another integer: \n";
    int y{};
    std::cin >> y;
    char op{};
    std::cout << "Enter an operation (choose from + - * or /): \n";
    std::cin >> op;
    int result{};
    result = calculate(x, y, op);

    std::cout << x << op << y << " is equal to " << result << '\n';
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
