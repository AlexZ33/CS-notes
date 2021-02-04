/*
 * @Author: AlexZ33
 * @Date: 2021-02-03 17:24:34
 * @LastEditTime: 2021-02-04 11:07:42
 * @LastEditors: Please set LastEditors
 * @Description:二叉树的建立与遍历（C语言实现）
 * https://zhuanlan.zhihu.com/p/87589946
 * @FilePath: /CS-notes/C/数据结构/树/TreeNode.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// 二叉树节点的定义
struct Node
{
    int data;
    struct Node *pleft;
    struct Node *pright;
} Node;

// 二叉树创造一个节点的函数，返回值是指向该节点的指针
struct Node *createnode(int value)
{
    struct Node *pnode = (struct Node *)malloc(sizeof(struct Node));
    pnode->data = value;
    pnode->pleft = pnode->pright = NULL;
    return pnode;
}

// 二叉树插入节点函数

struct Node *addnode(int value, struct Node *pnode)
{
    if (pnode == NULL)
        return createnode(value);
    if (value == pnode->data)
    {
        return pnode;
    }
    if (value < pnode->data)
    {
        if (pnode->pleft == NULL)
        {
            pnode->pleft = createnode(value);
            return pnode->pleft;
        }
        else
        {
            return addnode(value, pnode->pleft);
        }
    }
    else
    {
        if (pnode->pright == NULL)
        {
            pnode->pright = createnode(value);
            return pnode->pright;
        }
        else
        {
            return addnode(value, pnode->pright);
        }
    }
}

// 二叉树的遍历（三种，此处为中序遍历），用到递归

void listnodes(struct Node *pnode)
{
    if (pnode != NULL)
    {
        listnodes(pnode->pleft);
        printf("%d\n", pnode->data);
        listnodes(pnode->pright);
    }
}

// 求二叉树的深度, 递归
int Treeheight(struct Node *pnode)
{
    int LD, RD;
    if (pnode == NULL)
    {
        return 0;
    }
    else
    {
        LD = Treeheight(pnode->pleft);
        RD = Treeheight(pnode->pright);
        return (LD >= RD ? LD : RD) + 1;
    }
}

// 主函数
int main(void)
{
    int newvalue = 0;
    struct Node *proot = NULL;
    char answer = 'n';
    do
    {
        printf("Enter the node value:\n");
        scanf("%d", &newvalue);
        if (proot == NULL)
        {
            proot = createnode(newvalue);
        }
        else
        {
            addnode(newvalue, proot);
        }
        printf("\nDo you want to enter another (y or n)?");
        scanf("%c", &answer);
    } while (tolower(answer) == 'y');

    listnodes(proot);
    printf("\n The height of tree is %d!", Treeheight(proot));

    return 0;
}