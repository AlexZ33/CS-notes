/*
 * @Author: your name
 * @Date: 2021-09-28 14:50:08
 * @LastEditTime: 2021-09-28 14:53:29
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /CS-notes/C/algorithm/leetcode/94. 二叉树的中序遍历/inorderTraversal.go
 */

 func inorderTraversal (root *TreeNode) (res []int) {
	 var inorder func (node *TreeNode) 
	 inorder = func (node *TreeNode) {
		 if node == nil {
			 return 
		 }
		 inorder(node.Left)
		 res = append(res, node.Val)
		 inorder(node.Right)
	 }
	 inorder(root)
	 return
 }