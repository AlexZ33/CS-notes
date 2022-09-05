<!--
 * @Author: zhaokang zhaokang1@xiaomi.com
 * @Date: 2022-05-20 15:14:46
 * @LastEditors: zhaokang zhaokang1@xiaomi.com
 * @LastEditTime: 2022-07-12 13:13:24
 * @FilePath: /CS-notes/algorithm/README.md
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
-->
# 数据结构与算法
数据结构就是指一组数据的存储结构。算法就是操作数据的一组方法

数据结构是为算法服务的，算法要作用在特定的数据结构之上
## 数据结构
-  数组和列表
   -  数组（Array）是一种线性表数据结构。它用一组连续的内存空间，来存储一组具有相同类型的数据。
   -  数组具有**随机访问**的特点(连续的内存空间和相同类型的数据。正是因为这两个限制，它才有了一个堪称“杀手锏”的特性：“随机访问”。)
   -  有利就有弊，这两个限制也让数组的很多操作变得非常低效，比如要想在数组中删除、插入一个数据，为了保证连续性，就需要做大量的数据搬移工作。
   -  常用的二分查找算法需要用数组来存储数据。但如果我们选择链表这种数据结构，二分查找算法就无法工作了，因为链表并不支持随机访问
   -  与链表相比，数组具有更好的缓存位置。
   -  链表适合插入、删除，时间复杂度 O(1)；
   -  数组支持随机访问，根据`下标随机访问的时间复杂度`为 O(1)

> 注意：　数组是适合查找操作，但是查找的时间复杂度并不为 O(1)。即便是排好序的数组，你用二分查找，时间复杂度也是 O(logn)。

-  链表
   -  链表允许在迭代期间有效地从序列中的任何位置插入或删除元素。
   -  链表的一个缺点是访问时间是线性的(而且难以管道化)。（更快的访问，如随机访问，是不可行的）
-  栈
-  队列
-  字典
-  散列(表)
   -  适用于快速查找和检索

-  集合
   -  适用于存储只出现一次的元素
-  二叉树
   -  以层级的形式存储数据
   -  平衡二叉树是一棵平衡的二叉树，能让二叉树的操作维持在O（log2N）
   -  Treap通过随机数来优化二叉查找树（Binary Search Tree）防止其退化
-  堆
   -  堆可以实现优先队列
   -  左倾堆是一种可并堆，具有神奇的“左倾”性质。
-  跳表
-  图
   -  网络建模的理想选择
-  Tire树
-  Splay树
   -  Splay树通过其特有的Splay操作来维持平衡

# 1. 线性表
线性表（Linear List）。顾名思义，线性表就是数据排成像一条线一样的结构。每个线性表上的数据最多只有前和后两个方向。其实除了数组，链表、队列、栈等也是线性表结构。

与它相对立的概念是非线性表，比如二叉树、堆、图等。之所以叫非线性，是因为，在非线性表中，数据之间并不是简单的前后关系。
# 

## 算法

- 递归
- 排序
- 二叉树
- 搜索
- 哈希算法
- 贪心算法
  - 活动选择问题([Activity Selection Problem](https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/?ref=lbp))
  - 
- BF
- 分治算法(Divide and Conquer Algorithm)
  - pow(x,n)问题
  - 
- 回溯算法
  - [骑士的巡回赛问题The Knight’s tour problem](https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/?ref=lbp)
  - [迷宫里的老鼠Rat in a Maze ](https://www.geeksforgeeks.org/rat-in-a-maze-backtracking-2/?ref=lbp)
  - [N皇后问题N Queen Problem](https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/?ref=lbp)
  - [子集总和Subset Sum]()
  - [m 着色问题m Coloring Problem](https://www.geeksforgeeks.org/m-coloring-problem-backtracking-5/?ref=lbp)
  - [Hamiltonian Cycle哈密​​顿循环](https://www.geeksforgeeks.org/hamiltonian-cycle-backtracking-6/?ref=lbp)
  - [Sudoku数独](https://www.geeksforgeeks.org/sudoku-backtracking-7/?ref=lbp)
  - [拔河Tug of War](https://www.geeksforgeeks.org/tug-of-war/?ref=lbp)
  - [解决密码学难题Solving Cryptarithmetic Puzzles](https://www.geeksforgeeks.org/solving-cryptarithmetic-puzzles-backtracking-8/?ref=lbp)
- 动态规划
  - [最长递增子序列Longest Increasing Subsequence ](https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/?ref=lbp)
  - [最长公共子序列Longest Common Subsequence](https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/?ref=lbp) 
  - [编辑距离Edit Distance](https://www.geeksforgeeks.org/edit-distance-dp-5/?ref=lbp)
  - [最小成本路径Min Cost Path](https://www.geeksforgeeks.org/min-cost-path-dp-6/?ref=lbp)
  - [硬币变化Coin Change ](https://www.geeksforgeeks.org/coin-change-dp-7/?ref=lbp)
  - [矩阵链乘法Matrix Chain Multiplication](https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/?ref=lbp)
  - [二项式系数Binomial Coefficient](https://www.geeksforgeeks.org/binomial-coefficient-dp-9/?ref=lbp)
  -  [分包问题Knapsack Problem](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/)
  -  []()
- 字符串匹配算法
  - [Manacher 算法 – 线性时间最长回文子串](https://www.geeksforgeeks.org/manachers-algorithm-linear-time-longest-palindromic-substring-part-1/?ref=lbp)
- 模式搜索(Pattern Searching)
- [分支定界算法(Branch and Bound Algorithm)](https://www.geeksforgeeks.org/branch-and-bound-algorithm/?ref=shm)



# 参考材料
[Activity Selection Problem | Greedy Algo-1](https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/?ref=lbp)

[数据结构与算法之美](https://time.geekbang.org/column/intro/100017301?tab=catalog)

[Grokking Algorithms](https://github.com/egonSchiele/grokking_algorithms)

[Iterative Tower of Hanoi](https://www.geeksforgeeks.org/iterative-tower-of-hanoi/)

《算法设计与分析--北京大学》




