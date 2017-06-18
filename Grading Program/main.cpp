#include <iostream>


int main()
{
    unsigned short int grade;
    std::cout << "\nEnter your grade: ";
    std::cin >> grade;
    std::cout << std::endl;

    if (grade == 100){
        std::cout << "You scored a perfect score!\n";
    }
    else if ((grade < 100) && (grade > 89)){
        std::cout << "You've scored an A!\n";
    }
    else if ((grade <= 89) && (grade > 79)){
        std::cout << "You've scored a B!\n";
    }
    else if ((grade <= 79) && (grade > 69)){
        std::cout << "You've scored a C.\n";
    }
    else if ((grade <= 69) && (grade > 59)){
        std::cout << "You've scored a D.\n";
    }
    else if (grade <= 59){
        std::cout << "You've scored an F.\n";
    }

    return 0;
}
