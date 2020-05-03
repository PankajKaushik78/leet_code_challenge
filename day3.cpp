class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int feq[27] = {};
        for(int i=0; i<magazine.length(); i++){
            feq[magazine[i]-'a'+1]++;
        }
        
        for(int i=0; i<ransomNote.length();i++){
            if(feq[ransomNote[i]-'a'+1] < 1) return false;
            else feq[ransomNote[i]-'a'+1]--;
        }
        return true;
        
    }
};