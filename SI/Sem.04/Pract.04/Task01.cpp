// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int firstNum;
    int secondNum;

    cin >> firstNum;
    cin >> secondNum;

    int result=sum(firstNum, secondNum);

    cout << result;
}

