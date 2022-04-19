// Devs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;
int main()
{
    string in;
    int number = 0;
    cin >> in;

    for (auto i = in.begin(); i != in.end(); ++i)
    {
        
        switch (*i)
        {
        case 'X':number += 10; break;
        case 'L':number += 50; break;
        case 'I':number += 1; break;
        case 'V':number += 5; break;
        case 'C':number += 100; break;
        case 'D':number += 500; break;
        case 'M':number += 1000; break;
        default:break;
        }
     
    }
    cout  << number;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
