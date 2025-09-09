// using namespace std;

void displayMenu()
{
    std::cout << "\t=========================\n";
    std::cout << "\t  Nested Loops Demo  \n" ;
    std::cout << "\t=========================\n";
    
    std::cout << "\t   1. Piphagor table     \n";
    std::cout << "\t   2. Quadratic table     \n";
    std::cout << "\t   3. Triangle table     \n";
    std::cout << "\t   4. Diamon table       \n";
    std::cout << "\t   5. Exit program       \n";
    std::cout << "\t=========================\n";
}

int ChooseOption()
{
    int result = 0;
    std::cout << "\n Input number of option: ";
    std::cin >> result;
    return result;
}

bool allowContinue() 
{
    char result = 'n';
    std::cout << "\n> Continue (y/n)? - ";
    std::cin >> result;
    return (result == 'y');
}