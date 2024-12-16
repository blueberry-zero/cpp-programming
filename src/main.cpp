#include <iostream>

int main() {
    std::cout << "Hello World!" << "\n";
    std::cout << "I am learning C++!" << "\n";
    // comment

    /*
     * block comment
     */

    int my_num = 12;
    std::cout << my_num << "\n";

    my_num = 15;
    std::cout << my_num << "\n";

    double myDub = 15.1f;
    std::cout << myDub << "\n";

    char myChar = 'a';
    std::cout << myChar << "\n";

    std::cout << "Give me a num!" << "\n";
    std::cin >> my_num;
    std::cout << "Your num was " << my_num << "\n";

    char a = 65;
    char b = 66;
    char c = 67;

    std::cout << a << b << c << "\n";

    return 0;
}
