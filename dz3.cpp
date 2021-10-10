#include <iostream>

using namespace std;

long sumDivisors(const int n)
{
    long sum = 1;
    for(int i = 2; i <= n/2; i++)
        if (n % i == 0)
            sum += i; 
    return sum;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    
    cout << "Дружественные пары чисел: " << std::endl;
    for(int i = 1; i < 10001; i++)
    {
        int sum = sumDivisors(i);
        if (i != sum && i == sumDivisors(sum))
            cout << i << " " << sum << std::endl;
    }  
    return 0;
}
