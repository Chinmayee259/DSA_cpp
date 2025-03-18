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
}