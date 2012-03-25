#include <stdio.h>
#include <string.h>
#include "func.h"

int g_hight = 10, g_width = 7;
int g_gun_x = g_width / 2, g_gun_y = g_hight;

//蜜蜂群的位置信息。
int g_bee_position[g_width - 2][5];


void init(void) {
    //所有蜜蜂初始都存在，赋值为1
    for (i = 0; i < g_width - 2; i++) {
        for (j = 0; j < 5; j++) {
            g_bee_position[i][j] = 1;
        }
    }


}

int main(int argc, const char *argv[])
{
    init();


    return 0;
}
