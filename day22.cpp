class Solution {
public:
    
    string frequencySort(string s) {
        vector<pair<int, char>> ve('z'+1, {0,0});
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            ve[c].first += 1;
            ve[c].second = c;
        }
        sort(ve.begin(), ve.end());
        string ans = "";
        for(auto p : ve){
            ans = string(p.first, p.second) + ans;
        }
        return ans;
    }
};