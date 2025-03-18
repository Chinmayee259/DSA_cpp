#include<iostream>
using namespace std;

int Sum(int n){
    int sum = 0;
    while(n!=0)
    {
        int s = n % 10;
        int c = (n / 10);
        n = c;
        sum += s;
    }
    return sum;
}

int main(){
    int n;
    cout << " Enter any number : ";
    cin >> n;
    cout << Sum(n);
    return 0;
}