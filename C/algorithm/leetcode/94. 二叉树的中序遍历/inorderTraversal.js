/*
 * @Author: your name
 * @Date: 2021-09-28 14:38:52
 * @LastEditTime: 2021-09-28 14:48:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /CS-notes/C/algorithm/leetcode/94. 二叉树的中序遍历/inorderTraversal.js
 */



/**
 *首先我们需要了解什么是二叉树的中序遍历：按照访问左子树——根节点——右子树的方式遍历这棵树，而在访问左子树或者右子树的时候我们按照同样的方式遍历，直到遍历完整棵树。因此整个遍历过程天然具有递归的性质，我们可以直接用递归函数来模拟这一过程。
* 定义 inorder(root) 表示当前遍历到 \textit{root}root 节点的答案，那么按照定义，我们只要递归调用 inorder(root.left) 来遍历 \textit{root}root 节点的左子树，然后将 \textit{root}root 节点的值加入答案，再递归调用inorder(root.right) 来遍历 \textit{root}root 节点的右子树即可，递归终止的条件为碰到空节点。
* 作者：LeetCode-Solution
* 链接：https://leetcode-cn.com/problems/binary-tree-inorder-traversal/solution/er-cha-shu-de-zhong-xu-bian-li-by-leetcode-solutio/
 *
 * @param {*} root
 * @return {*} 
 */
var inorderTraversal = function (root) {
    const res = [];
    const  inorder = (root) => {
        if (!root) {
            return 
        }
        inorder(root.left) // 先遍历当前父节点左子树
        res.push(root.val)
        inorder(root.right)　 // 最后遍历当前父节点右子树
    }
    inorder(root)
    return res
}