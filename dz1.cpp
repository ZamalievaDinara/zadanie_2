#include <iostream>

using namespace std;

void rollDice(int& dice1, int& dice2)
{
    std::srand(std::time(nullptr));
    dice1 = 1 + std::rand() % 6;
    dice2 = 1 + std::rand() % 6;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int dice1, dice2;

    rollDice(dice1, dice2);
    cout << "Броски кубика:" << dice1 << " " << dice2 << std::endl;
  
    return 0;
}
