// to calculate binomial expantion using nCr = n! / r!(n-r)!

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


int nCr(int n , int r)
{
    int C = Fact(n) / ( Fact(r) * Fact(n-r));
    return C;
}

int main(){
    int n , r;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter r : ";
    cin >> r;
    cout << "nCr = " << nCr(n , r);
    return 0;
}

// Output
// Enter n : 5 
// Enter r : 3
// nCr = 10
