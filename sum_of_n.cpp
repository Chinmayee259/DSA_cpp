//Sum of 1st n natural numbers
#include<iostream>
using namespace std;

int Sum(int n){
    int sum = 0;
    for(int i = 1; i<=n ; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The sum of number from 1 to " << n << " is : " << Sum(n) << endl;
    return 0;
}

 // Output
// Enter a number : 5
// The sum of number from 1 to 5 is : 10
