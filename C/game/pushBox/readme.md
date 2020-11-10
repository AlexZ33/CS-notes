
# simple

## 预装环境

- ubuntu 系统
- gcc编译器

写好`simple.c`的游戏代码,。要用 gcc 编译该文件，使用下面的命令：
```
gcc -g -Wall simple.c -o simple
```





# 

##  预览

## 预装环境

## 游戏制作过程

- 1、加载游戏数据（初始化    InitGame();）

- 2、绘制图形（绘图    RenderGame();）

- 3、玩家操作（数据更新 UpdateGame();）


```

InitGame();    //初始化游戏

while(true)

{

    RenderGame();    //绘制游戏
    UpdateGame();    //数据更新

}
```