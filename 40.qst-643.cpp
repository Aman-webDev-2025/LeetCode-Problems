#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) { 
    double current = 0; 
    
    for(int i = 0; i < k; i++){ 
        current += nums[i]; 
    } 
    
    double max_sum = current; 
    
    for(int i = k; i < nums.size(); i++){ 
        current += nums[i];     
        current -= nums[i-k];   
        
        if(current > max_sum){ 
            max_sum = current; 
        } 
    } 
    
    return max_sum / k; 
}


int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << "Max Average: " << findMaxAverage(nums, k) << endl;
    return 0;
}
