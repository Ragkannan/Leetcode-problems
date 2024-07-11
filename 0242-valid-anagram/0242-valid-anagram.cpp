/* initial thoughts - check if each letter in string(s) is in string(t), if it is
return true, if not return false. 
second thoughts - create a map of the letter to the count of the times it is there in the string.  
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> scount; 
        unordered_map<char,int> tcount;
        for(char c:s){
            scount[c] += 1;
        }
        for(char c: t){
            tcount[c] += 1;
        }
        if(scount == tcount){ 
            return true;
        }
        return false;
    }
};