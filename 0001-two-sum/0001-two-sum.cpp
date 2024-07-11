/* given - array of integers and a int target
output - array of ints which contains the indices of the two numbers that add up to the target from the given array

thought process 
loop through the given vector and subtract the current number from the target and check if that number is in the map, if not add to the map, with the key being the number and value being the index
*/



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        unordered_map<int,int> int_map; 
        
        for(int i = 0; i < nums.size();i++){
            int need_num = target - nums.at(i);
            if(int_map.find(need_num)!= int_map.end()){
                result.push_back(int_map.at(need_num));
                result.push_back(i);
                break;
            }
            int_map[nums.at(i)] = i;
        
        }
        return result;
};
};