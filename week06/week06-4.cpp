//week06-4.cpp
//682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s:operations){
            if (s=="C"){ 
                a.pop_back();
            } else if (s=="D") {
                a.push_back( a[a.size()-1]*2 );
            } else if (s=="+") {
                a.push_back( a[a.size()-2] + a[a.size()-1] );
            } else{
                // a.push_back(stoi(s));//方法1:stoi(s)在C++11 最簡單的方法
                //a.push_back( atoi(s.c_str()));//方法2:atoi(s.c_str())
                //方法3
                int now;
                stringstream ss(s);
                ss >> now;
                a.push_back(now);
            }
        }
        int ans=0;
        for (int num :a){
            ans+=num;
        }
        return ans;
    }
};
