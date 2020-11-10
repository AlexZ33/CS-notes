/*
 * @Author: your name
 * @Date: 2020-11-10 14:51:04
 * @LastEditTime: 2020-11-10 16:03:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /CS-notes/C/game/pushGame/simple.cpp
 */

//  导包
#include<stdio.h>
#include<stdlib.h>
#include <termios.h>

// 需要的变量
char key = 0; // 存储用户按键
int row = 0, column = 0; // 人物在第几行,第几列(坐标)
int oldType = 0; // 人物站在的地方原来是什么地面
int oldBoxType = 0; // 箱子站着的地方原来是什么地面


// 地图设计
/*
 	0: 空地
	1: 目的地   ☆
	2: 墙壁     ■ 
	4: 箱子     ▓
	8: 玩家     ♀
	16: 箱子到达目的地  ★
*/#include <linux/input.h>
	{0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0},
	{0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0},
	{0, 2, 2, 2, 2, 0, 0, 4, 4, 2, 2, 2, 2, 2},
	{0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2},
	{0, 2, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4, 0, 2},
	{0, 2, 0, 0, 0, 2, 2, 0, 2, 2, 2, 2, 2, 2},
	{2, 2, 2, 2, 4, 2, 2, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 4, 0, 2, 0, 0, 0, 8, 0, 0, 2},
	{2, 0, 4, 0, 4, 0, 2, 0, 2, 2, 2, 2, 2, 2},
	{2, 2, 0, 0, 4, 0, 2, 0 ,2, 1, 1, 1, 2, 0},
	{0, 2, 0, 2, 0, 0, 0, 0, 0, 1, 1, 1, 2, 0},
	{0, 2, 0, 0, 0, 0, 2, 2, 1, 1, 1, 1, 2, 0},
	{0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0}
};

// 存储所有类型为1节点的位#include <linux/input.h>
	{9, 10},
	{9, 11},
	{10, 9},
	{10, 10},
	{10, 11},
	{11, 8},
	{11, 9},
	{11, 10},
	{11, 11}
};

// 开始画地图

void DrawMap() {
	// 用两个for循环遍历地图map 矩阵（13*14的矩阵）
    for (int i = 0; i < sizeof(map) / sizeof(map[0]); i++)
    {
        for (int j = 0; j < sizeof(map[0]) / sizeof(map[0][0]); j++)
        {   
			printf(" %d", map[i][j]);
        	switch (map[i][j])
        	{
        	case 0:
        		printf("  ");
        		break;
        	case 1:
        		printf("☆");
        		break;
        	case 2:
        		printf("■");
        		break;
        	case 4:
        		printf("▓");
        		break;
        	case 8:
        		printf("♀");人物和箱子移动的方法，根据传过来的位置信息进行移动
        		row = i;
        		column = j;
        		break;
        	case 16:
        		printf("★");
        		break;
        	}
        }
        printf("\n");
    }
}

// 人物和箱子移动的方法，根据传过来的位置信息进行移动

void Move(int r, int c)
{
	if (map[row + r][column + c] != 2)	// 如果前面不是墙壁的话，就可以移动
	{
		if (map[row + r][column + c] == 4 || map[row + r][column + c] == 16)	// 如果遇到箱子的处理办法
		{
			if (map[row + 2 * r][column + 2 * c] != 2 && map[row + 2 * r][column + 2 * c] != 4 && map[row + 2 * r][column + 2 * c] != 16)	// 箱子后面不是墙壁和箱子
			{
				// 移动箱子
				if (map[row + r][column + c] == 16)
				{
					oldBoxType = 1;
				}
				else if (map[row + r][column + c] == 4)
				{
					oldBoxType = 0;
				}
				map[row + r][column + c] = oldBoxType;
				if (map[row + 2 * r][column + 2 * c] == 1)
				{
					map[row + 2 * r][column + 2 * c] = 16;
				}
				else
				{
					map[row + 2 * r][column + 2 * c] = 4;
				}
			}
			else {
				return;	// 如果箱子后面是墙壁，那么停止移动
			}
		}
		map[row][column] = oldType;	// 将人物走过的地方设为原来的地面类型
		oldType = map[row + r][column + c];	// 存储人物接下来要走的地方的地面类型
		map[row + r][column + c] = 8;	// 人移动的位置发生变化
	}
}

// 检查是否完成
void resultCheck()
{
	bool result = true;
	for (int i = 0; i < sizeof(tarPos) / sizeof(tarPos[0]); i++)
	{
		if (map[tarPos[i][0]][tarPos[i][1]] != 16)
		{
			result = false;
		}
	}
	if (result)
	{
		MessageBox(NULL, TEXT("你赢了!!"), TEXT("游戏结束"), MB_OK);
		exit(0);
	}
}

// 主函数 , 注意c程序里必须有主函数

/* 游戏流程
InitGame();    //初始化游戏

while(1)

{

    RenderGame();    //绘制游戏
    UpdateGame();    //数据更新

}
*/ 
int main(void)
{
	DrawMap();
	while (true)
	{
		key = _gettch();	//_gettch()可以用来监听键盘按键, 注意此处只适用windows。 其他查看stackoverflow：https://www.itranslater.com/qa/details/2131761727980176384
		switch (key)
		{
		case 'a':
			Move(0, -1);
			break;
		case 'd':
			Move(0, 1);
			break;
		case 'w':
			Move(-1, 0);
			break;
		case 's':
			Move(1, 0);
			break;
		}
		resultCheck();
		system("cls");	// 清空屏幕
		DrawMap();
	}
	return 0;
}