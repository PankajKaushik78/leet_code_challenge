class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k == 0) return num;
        if(num.size() <= k) return "0";
        
        stack<char> s;
        for(char c : num){
            while(k && !s.empty() && int(s.top()) > int(c)){
                s.pop();
                k--;
            }
            s.push(c);
        }
        
        if(k){
            while(k--){
                s.pop();
            }
        }
        stack<char> temp;
        while(!s.empty()){
            temp.push(s.top());
            s.pop();
        }
        while(temp.top() == '0' && temp.size() != 1) temp.pop();
        num = "";
        while(temp.size() > 0){
            num.push_back(temp.top());
            temp.pop();
        }
        return num;
    }
};