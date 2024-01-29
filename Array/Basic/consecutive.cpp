#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
            } else {
                cnt = 0;
            }

            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);
    cout << "The maximum consecutive 1's are: " << ans << endl;
    
    return 0;
}
output
Enter the number of elements: 5
Enter 5 elements: 1 0 1 0 0
The maximum consecutive 1's are: 1
