#include <iostream>
#include<vector>
using namespace std;

void LinearSearchVector(vector<int>&vec, int key)
{
    int count = 0;
    for(int val : vec)
    {
        if(val == key)
        {
             count += 1;
        }
    }
    if(count > 0)
    {
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found"<<endl;
    }
    
    
}
int main() {
    vector<int>vec = {1,7,4,9,2,3};
    int key = 9;
    LinearSearchVector(vec , key);
    return 0;
}