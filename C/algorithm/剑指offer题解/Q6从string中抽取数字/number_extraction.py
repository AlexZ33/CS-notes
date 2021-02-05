'''
Author: your name
Date: 2021-02-05 17:04:27
LastEditTime: 2021-02-05 17:40:39
LastEditors: Please set LastEditors
Description: In User Settings Edit
FilePath: /C/algorithm/剑指offer题解/Q6从string中抽取数字/number_extraction.py
'''

"""
方法一：正则实现
"""
import re

str =  "train acc: 92.1, dev acc: 91.1, test acc: 90.2"

out = re.findall(r"[-+]?\d*\.\d+|\d+", str)
print(out)

"""
方法二: 遍历实现
"""

str_copy =  "train acc: 92.1, dev acc: 91.1, test acc: 90.2"

# 以";"和","作为分割
# temp结果：　['train acc', ' 92.1', ' dev acc', ' 91.1', ' test acc', ' 90.2']

temp =  re.split(r'[:,]',str_copy)
# 从下标为1的元素（即a[1]为'92.1'开始），隔一个元素，读取一个元素。
arr = temp[1::2]

print(temp) # ['train acc', ' 92.1', ' dev acc', ' 91.1', ' test acc', ' 90.2']

print(arr) # [' 92.1', ' 91.1', ' 90.2']
