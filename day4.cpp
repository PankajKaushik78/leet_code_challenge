class Solution {
public:
    int findComplement(int num) {
        string binary = "";
        while(num > 0){
            int rem = num%2;
            binary =  to_string(rem) + binary ;
            num /= 2;
        }
        long long int ans = 0;
        for(int i=binary.size()-1; i>=0; i--){
            if(binary[i] == '0'){
                int power =binary.size() - 1 - i;
                ans += pow(2, power);
            }
        }
        return ans;
    }
};

