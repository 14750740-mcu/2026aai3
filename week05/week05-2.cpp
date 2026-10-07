//week05-2.cpp
//709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0;i<s.length();i++){
            //??if (s[i]>='A'& s[i]<='Z')s[i]=s[i]-'A'+'a';
            //??if (isupper(s[i]))s[i]= s[i]-'A'+'a';
            s[i]=tolower(s[i]);// + #include <cctype>(leetcode ?????)
        }
        return s;
    }
};
