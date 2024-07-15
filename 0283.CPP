class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size= nums.size();
        if(size==0 ||size==1){
            return;
        }
        int nonzero=0, zero=0;
        while(nonzero<size){
      if(nums[nonzero]!=0){
        int temp=nums[nonzero];
        nums[nonzero]=nums[zero];
        nums[zero]=temp;
        nonzero++;
        zero++;
      }  
      else{
        nonzero++;
      }
    }
    }
};
