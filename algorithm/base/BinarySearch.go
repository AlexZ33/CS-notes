/*
 * @Author: zhaokang zhaokang1@xiaomi.com
 * @Date: 2022-05-20 16:55:48
 * @LastEditors: zhaokang zhaokang1@xiaomi.com
 * @LastEditTime: 2022-05-20 17:08:37
 * @FilePath: /CS-notes/algorithm/base/BinarySearch.go
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
package main

import "fmt"

func checkBin(list []int, i int) {
	low:= 0
	high := len(list) -1
	for low <= high {
		mid := (low + high) / 2
		if list[mid] == i {
			return mid 
		}
		if list[mid] < i {
			low = mid+1
		} else {
			high = mid -1
		}
	}
	return -1
}

// test
func main () {
	fmt.Println(checkBin([]int{1,2,3,4,5}, 1))
	fmt.Println(checkBin([]int{1, 2, 3, 4, 5}, -1))
}
