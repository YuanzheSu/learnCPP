// animal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    ostrich
};

std::string getAnimalName(Animal animal)
{
    switch (animal)
    {
    case Animal::pig:
        return "pig";
    case Animal::chicken:
        return "chicken";
    case Animal::goat:
        return "goat";
    case Animal::cat:
        return "cat";
    case Animal::dog:
        return "dog";
    case Animal::ostrich:
        return "ostrich";
    default:
        return "You've entered an invalid animal name.\n";
    }
}
void printNumberOfLegs(Animal animal)
{
    int num{0};
    switch (animal)
    {
    case Animal::chicken:
    case Animal::ostrich:
        num = 2;
        break;
    case Animal::pig:
    case Animal::goat:
    case Animal::cat:
    case Animal::dog:
        num = 4;
        break;
    default:
        num = 114514;
        break;
    }
    std::cout << "A " << getAnimalName(animal) << " has " << num << " legs.\n";
}
int main()
{
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);
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
