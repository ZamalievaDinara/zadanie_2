#include <iostream>

using namespace std;

long fib(const int n)
{
  if (n <= 2) 
    return 1;
  long prior = 1;
  long current = 1;
  long next;
  for (int i = 2; i < n; i++)
  {
    next = prior + current;
    prior = current;
    current = next;
  }
  return next;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число N: ";
    cin >> n;
    cout << "N-ое число Фибоначчи: " << fib(n) << std::endl;
  
    return 0;
}
