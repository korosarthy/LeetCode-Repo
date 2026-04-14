class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
     long long count = 0;
        int conscount = 0;
        for(int num : nums){
            if(num == 0){
                conscount++;
            }else{
                conscount = 0;
            }
            count += conscount;
        }
        return count;
    }
};