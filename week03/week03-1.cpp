// week03-1.cpp 第8題
// LeetCode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int N = nums.size();//陣列的.size()大小
        int neg = 0;//負數有幾個？迴圈前面，一開始0個
        for (int num: nums){// C+階 for 圈
            if(num==0) return 0;//只要有任一個是0,乘後變
            if(num<0) neg++;//遇到負?
        }
        if(neg%2==0) return 1;//有偶?個「負數」負負得正
        return -1;//負的


        /* int ans = 1;
        for (int i=0; i<N; i++) {
            ans = ans * nums[i];
        }
        if (ans>0) return 1;
        if (ans<0) return -1; 
        return 0; */
    }
};
