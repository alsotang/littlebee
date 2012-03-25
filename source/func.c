#include <stdio.h>
#include <string.h>
#include "gragh.h"

#include "func.h"

//画图相关的函数：
//初始化的时候画边框
void drawFrame(int hight = g_hight, int width = g_width);


//初始化的时候画所有的蜜蜂
void drawAllBees(int** bee_position = g_bee_position,
        int hight = g_hight,
        int width = g_width);

//根据枪的坐标画出枪的位置
void drawGun(int gun_x = g_gun_x, int gun_y = g_gun_x);
void cleanGun(int gun_x = g_gun_x, int gun_y = g_gun_x);

void drawBullet(int bullet_x, int bullet_y) {
}
void cleanBullet(int bullet_x, int bullet_y) {
}
//根据单个小蜜蜂的位置把它在屏幕上删除掉
void killBee(int bee_x, int bee_y);



//按键有关的函数：
//检测到' '就传给spacePressed, 检测到`上下左右`就传给directionPressed
//这个函数要循环执行
void listenKeyboard(void) {
    key = getchar();
    switch(key) {
        case ' ':spacePressed();break;
    //TODO
    }
}

//gun_x AND gun_y用来确定枪从哪里发出子弹
void spacePressed(int gun_x = g_gun_x, int gun_y = g_gun_y) {
    for (i = gun_y + 2; i < g_hight - 1; i++) {
        drawBullet(gun_x, i--);
        sleep(
    }
    

//gun_x AND gun_y用来确定从哪里开始消除并移动枪
void directionPressed(int gun_x, int gun_y);









