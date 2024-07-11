/*Use a prefix and postfix method to calculat the product 
Product of numbers before the index and product of numbers after the index, 
then multiply these 2. Store the prefix and postfix in the respective indices in the output then you can multiply these two at the end



*/



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> result(size,1);
        int prefix = 1;
        for(int i = 0; i < size; i ++){
            result.at(i) = prefix;
            prefix *= nums.at(i);
        }
        int postfix = 1;
        for(int i = size-1; i >= 0; i--){
            result.at(i) *= postfix;
            postfix *= nums.at(i);
        }
        return result;
    }
};