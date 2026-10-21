//week07-3.cpp 
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,d=0;//d是0:北1:東 2:南3:西
        for (char c : instructions) {
            if(c=='R') d =(d+1)% 4; //向右轉
            if(c=='L') d=(d-1+4)%4; //向左轉
            if(c=='G') { //前進
                if(d==0) y++;
                if(d==1) x++;
                if(d==2) y--;
                if(d==3) x--;
            }
        }
        //指令走完、離開迴圈,要檢查(1)方向有改,一定4次繞圈圈(2)回到原來的位置,1次就繞中來
        if (x==0 && y==0) return true; // 回到原來的位置
        if (d != 0) return true;//跟原來方向不一樣,4次後,也是繞圈圈
        return false;//越走越遠,不會回來了
    }
};
