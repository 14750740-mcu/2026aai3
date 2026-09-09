//week01-3.cpp 學習計畫 basic 第三題
// leetcode 28. Find the Index of the First Occurrence in a String
//大海撈針（在一大堆稻草堆裡，找一枝針）
class Solution {
public:
    int strStr(string haystack, string needle) {
        //所有的程式?目，都可以用for（迴圈）if（判?）函式呼叫
        int Hl=haystack.length(),Nl=needle.length();
        //函式呼叫,字串的長度.length()
        for(int i=0;i<= Hl-Nl;i++){//迴圈
            if (haystack.substr(i,Nl)==needle) return i;//找到答案
            //如果大字串的.substr（開始，長度）等於小字串，就找到答案了
        }
        return -1;//找不到
    }
};
