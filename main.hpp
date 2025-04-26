
//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************

#include <iostream>
#include <cmath>
using namespace std;

void getTwoValues(int &begin, int &end) 
{
    do 
    {
        cout << "Enter two integers: ";
        cin >> begin >> end;
        if (begin >= end) 
        {
            cout << "Invalid input. The first integer must be less than the second. >:( " << endl;
        }
    } 
    while (begin >= end);
}

bool isPrime(int num)
 {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

int getNextPrime(int begin) 
{
    int nextPrime = begin + 1;
    while (!isPrime(nextPrime)) 
    {
        ++nextPrime;
    }
    return nextPrime;
}

int getPrevPrime(int end) 
{
    int prevPrime = end - 1;
    while (prevPrime > 1 && !isPrime(prevPrime))
     {
        --prevPrime;
    }
    return prevPrime;
}