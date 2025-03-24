// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int array[5] = {11,88,21,10,2};
    int min = array[0];
    int max = array[0];
    int mini , maxi;
    int i;
    for(i = 0; i<5 ; i++)
    {
        if(min > array[i])
        {
            min = array[i];
            mini = i;
        }
        
        if(max < array[i])
        {
            max = array[i];
            maxi = i;
        }
    }
    cout << "The smallest number in an array is "<< min <<" ,at the index "<< mini << endl;
    cout << "The largest number in an array is "<< max <<" ,at the index "<< maxi << endl;
   
    
    return 0;
}