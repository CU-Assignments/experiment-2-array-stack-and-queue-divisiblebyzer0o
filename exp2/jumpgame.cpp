#include <iostream>
#include <vector>

using namespace std;

int jump(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return 0;  

    int jumps = 0, farthest = 0, current_end = 0;

    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + nums[i]);  
        if (i == current_end) { 
            jumps++;  
            current_end = farthest;
            if (current_end >= n - 1) break;  
        }
    }

    return jumps;
}

int main() {
    vector<int> nums = {2, 3, 1, 1, 4};  
    cout << "Minimum jumps required: " << jump(nums) << endl;
    return 0;
}
