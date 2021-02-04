/*
 * @Author: your name
 * @Date: 2021-01-29 14:05:20
 * @LastEditTime: 2021-02-03 11:44:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /CS-notes/C/数据结构/树/TreeNode.cpp
 */
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <set>
using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL)
    {
    }
}

void
PrintTree(TreeNode *root)
{
    if (root == NULL)
    {
        printf
    }
}
