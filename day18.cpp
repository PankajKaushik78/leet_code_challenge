class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> ohash(26,0);
        vector<int> thash(26,0);
        for(int i=0; i<s1.length(); i++){
            ohash[s1[i]-'a'] += 1;
        }
        int window = s1.length();
        for(int j=0; j<window; j++){
            thash[s2[j]-'a']+=1;
        }
        int left = 0;
        int right = window - 1;
        while(right < s2.length()){
            if(ohash == thash)
                return true;
            right+=1;
            if(right < s2.length())
                thash[s2[right]-'a']+=1;
            thash[s2[left]-'a']-=1;
            left+=1;
        }
        return false;
        
    }
};