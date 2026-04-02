#include <iostream>
using namespace std;

int main(){
    int nums[5] = {5,6,7,8,9};
    int target = 7;
    int index = -1;
    for(int i = 0; i < 5; i++){
        if(nums[i] == target){
            cout << i << endl;
        }
    
    }
    return 0;
}
