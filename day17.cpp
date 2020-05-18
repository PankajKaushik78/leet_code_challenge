class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> phash(26,0);
        vector<int> hash(26,0);
        for(int i=0; i<p.length(); i++){
            phash[p[i]-'a'] += 1;
        }
        int window = p.length();
        if(window > s.length()) return ans;
        int left = 0, right = 0;
        while(right < window){
            hash[s[right]-'a'] += 1;
            right += 1;
        }
        right--;
        while(right < s.length()){
            if(hash == phash)
                    ans.push_back(left);
            right+=1;
            if(right != s.length())
                hash[s[right]-'a'] += 1;
            hash[s[left]-'a'] -= 1;
            left += 1;
        }
        return ans;
    }
};