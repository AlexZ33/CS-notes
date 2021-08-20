"""
Author: your name
Date: 2021-01-26 16:52:45
LastEditTime: 2021-01-26 17:43:38
LastEditors: Please set LastEditors
Description: In User Settings Edit
FilePath: /CS-notes/C/algorithm/剑指offer题解/Q3数组中重复的数字/duplicate.py
"""

"""
解法一：利用字典（哈希）
"""
class Solution:
    # 这里要特别注意~找到任意重复的一个值并赋值到duplication[0]
    # 函数返回True/False
    def duplicate(self, numbers, duplication):
        dic = {}
        for num in numbers:
            if not num in dic:
                dic[num] = 1
            else:
                dic[num] += 1
        for num in numbers:
            if dic[num] != 1:
                duplication[0] = num
                return True
        return False

b = {}
n = Solution()
n.duplicate([2,1,3,1,4], b)

