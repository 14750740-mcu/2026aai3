//week05-3a.cpp
//58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans =0, now =0; 
        for (char c : s){
            if (c==' '){
                if(now!=0) ans=now; //ans = max(ans, now); 
                now = 0; 
            }else now++;
        }
        if(now!=0) ans=now; //ans = max(ans, now); 
        return ans;
    }
};
