#! https://zhuanlan.zhihu.com/p/445393774
<!--
 * @Author: your name
 * @Date: 2021-12-14 17:53:54
 * @LastEditTime: 2021-12-14 21:58:16
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /leetcode/197.上升的温度/readme.md
-->
# 【SQL】leetcode 197. 上升的温度 

# 题目

表 Weather
```
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| id            | int     |
| recordDate    | date    |
| temperature   | int     |
+---------------+---------+
```
id 是这个表的主键
该表包含特定日期的温度信息
 

编写一个 SQL 查询，来查找与之前（昨天的）日期相比温度更高的所有日期的 id 。

返回结果 不要求顺序 。

查询结果格式如下例：

```
Weather
+----+------------+-------------+
| id | recordDate | Temperature |
+----+------------+-------------+
| 1  | 2015-01-01 | 10          |
| 2  | 2015-01-02 | 25          |
| 3  | 2015-01-03 | 20          |
| 4  | 2015-01-04 | 30          |
+----+------------+-------------+

Result table:
+----+
| id |
+----+
| 2  |
| 4  |
+----+
2015-01-02 的温度比前一天高（10 -> 25）
2015-01-04 的温度比前一天高（20 -> 30）
```
# 题解

## 方法一:  使用 JOIN 和 DATEDIFF() 子句
MySQL 使用 DATEDIFF 来比较两个日期类型的值。

因此，我们可以通过将 weather 与自身相结合，并使用 DATEDIFF() 函数。

```mysql

SELECT
        weather.id  AS  'Id'
FROM
        weather
                JOIN
        weather  w ON DATEDIFF(weather.RecordDate, w.RecordDate) =1
                AND  weather.Temperature > w.Temperature 
;                 
```


[SQL Server DATEDIFF() 函数](https://www.w3school.com.cn/sql/func_datediff.asp) : 返回两个日期间的差值


## 方法二: 不用JOIN

```
SELECT w2.Id
FROM       Weather w1, Weather w2
WHERE DATEDIFF(w2.RecordDate, w1.RecordDate) = 1
AND w1.Temperature < w2.Temperature

```

## 方法三: 使用Lead函数，

```mysql
select Id
from 
(
	select 
		temperature,
		recordDate,
		lead(id,1) over (order by recordDate) as 'Id',
		lead(recordDate,1) over (order by recordDate) as 'nextDate',
		lead(temperature,1) over (order by recordDate) as 'nextTemp'
	from weather 
)t 
where nextTemp > temperature and DATEDIFF(nextDate, recordDate) = 1

```
# 问： 如何比较日期数据？


