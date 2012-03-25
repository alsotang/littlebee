#ifndef __FUNC__H__
#define __FUNC__H__
//画图相关的函数：
//初始化的时候画边框
void drawFrame(int hight, int width);


//初始化的时候画所有的蜜蜂
void drawAllBees(int** bee_position, int hight, int width);

//根据枪的坐标画出枪的位置
void drawGun(int gun_x, int gun_y);

void cleanGun(int gun_x, int gun_y);
//根据单个小蜜蜂的位置把它在屏幕上删除掉
void killBee(int bee_x, int bee_y);



//按键有关的函数：
//检测到' '就传给spacePressed, 检测到`上下左右`就传给directionPressed
//这个函数要循环执行
void listenKeyboard(void);

//gun_x AND gun_y用来确定枪从哪里发出子弹
void spacePressed(void, int gun_x, int gun_y);

//gun_x AND gun_y用来确定从哪里开始消除并移动枪
void directionPressed(void, int gun_x, int gun_y);

#endif







