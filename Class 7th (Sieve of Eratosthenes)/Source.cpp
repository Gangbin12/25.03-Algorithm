// Class 7th (Sieve of Eratosthenes).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

bool isPrime(const int& n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void sieve(int n)
{
    int* container = new int[n + 1];

    for (int i = 0; i <= n; i++)
    {
        container[i] = i;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (container[i] == 0)
        {
            continue;
        }

        for (int j = i * 2; j <= n; j += i)
        {
            container[j] = 0;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (container[i] != 0)
        {
            cout << container[i] << " ";
        }
    }

    delete[] container;
}

int main()
{
    sieve(16);

    return 0;
}