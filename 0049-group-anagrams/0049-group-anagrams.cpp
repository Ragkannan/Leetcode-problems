/*
input is a vector of strings 
output needs to be a vector of vector of strings
put first word in a vector, check next string if it is an anagram if it is, add to teh same vector and if isnt, create a new vector and add to the total vectors. 

new method to check if it is an anagram - sort each string in input vector to check if any of the words are the same as each other. 
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> output;
        for(int i = 0; i < strs.size(); i ++){
            string word = strs.at(i);
            string non_sort = word;
            sort(word.begin(),word.end());
            mp[word].push_back(non_sort);
        }
        for(unordered_map<string,vector<string>>::iterator it = mp.begin(); it != mp.end(); it++){
            output.push_back(it->second);
        
            }
        return output;
        
    }
};