/*
 * @lc app=leetcode.cn id=3 lang=cpp
 * [3] 无重复字符的最长子串
 *
 * https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/description/

 *
 * 给定一个字符串，请你找出其中不含有重复字符的 最长子串的长度。
 * 
 * 示例 1:
 * 
 * 输入: "abcabcbb"
 * 输出: 3 
 * 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
 * 
 * 
 * 示例 2:
 * 
 * 输入: "bbbbb"
 * 输出: 1
 * 解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
 * 
 * 
 * 示例 3:
 * 
 * 输入: "pwwkew"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
 * 请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
 * 
 * 
 */


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m[256]={0};//字符有256个
        int left=0;//查找的左边界
        int mlen=0;//结果
        for(int i=0;i<s.length();i++)
        {
            ///两种情况 使当前字符加入子串
            ///情况1 该字符从来没出现过
            ///情况2 该字符出现过但在计算的边界之前 
            if(m[s[i]]==0||m[s[i]]<left)
            {
                mlen=max(mlen,i-left+1);
            }
            else
            {
                //出现重复元素以此处为左边界计算下一个子串的长度
                left=m[s[i]];
            }
            ///用i+1而不用i 处理了索引0的特殊性
            m[s[i]]=i+1;
        }
        return mlen;
    }
};


