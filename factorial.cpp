// Factorial of n 
#include<iostream>
using namespace std;

int Fact(int n)
{
    int fact = 1;
    if (n == 0 || n == 1)
    {
        return fact;
    }

    else{
        for(int i = 1; i <= n; i++ )
        {
            fact = fact*i;
        }
        return fact;
    }
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n < 0){
        cout << "Factorial cannot be calculated"<<endl;
    }
    else{
        cout << "The factorial of " << n << " is "<<Fact(n) <<endl;
        
    }
    return 0;
}

// Enter a number : 4
// The Fctorial of 4 is 24

// Enter a number : 0
// The factorial of 0 is 1

// Enter a number : 1
// The factorial of 1 is 1

// Enter a number : -9
// The factorial cannot be calculated
