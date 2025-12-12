#include<iostream>
using namespace std;

int main(){
int nums []= {23, 45, 42, 56, -87, 99};
int size = 6;
  int smallest = 100;
  

  for (int i = 0; i < size; i++)
  {
    if (nums[i] < smallest)
    {
       smallest = nums[i];
    }
    
  }
  cout<<"Smallest= "<<smallest;
  
  return 0;
  }

