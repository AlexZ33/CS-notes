/*
 * @Author: your name
 * @Date: 2021-09-17 11:33:51
 * @LastEditTime: 2021-09-17 19:17:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /CS-notes/C++/playground/Longest-Substring-Without-Repeating-Characters/solution.cpp
 */

# include <unordered_set>
class Solution {
    public:
        int lengthOfLongestSubstring(string s ) {
            if(s.size() == 0) return 0;
            // https://blog.csdn.net/vevenlcf/article/details/51743058
            // http://www.cplusplus.com/reference/unordered_set/unordered_set/?kw=unordered_set
            unordered_set<char> lookup;
             int maxStr = 0;
             
        }
}