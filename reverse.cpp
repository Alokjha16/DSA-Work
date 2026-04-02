#include <iostream>
using namespace std; 

int main(){
    int nums[5] = {5,10,15,20,25};
    int start = 0;
    int end = 4;
    while (start < end || start == end)
    {
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << " ";
    }
    
    
    return 0;

}