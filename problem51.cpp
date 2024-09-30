/*
    WRITE C++ PROGRAM TO RETURN COUNT OF PRIME NUMBERS BETWEEN THE
    GIVE RANGE.
*/
#include <iostream>
#include <vector>
using namespace std;
int countPrime(int);
int main()
{
    int range;
    cout << "Enter the range: ";
    cin >> range;
    cout << "The total number of prime numbers in given range is: " << countPrime(range) << endl;
    return 0;
}
int countPrime(int range)
{
    int count = 0;
    // initially supposing that every number is prime number
    // METHOD: Sieve of eratosthenes
    vector<bool> prime(range + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < range; i++)
    {
        if (prime[i])
        {
            count++;
            // table of i
            for (int j = i * 2; j < range; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}