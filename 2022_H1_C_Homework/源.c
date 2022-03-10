
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>
#include "stack.h"

#define Pi 3.1415926535897932
#define STACK_MAX 10000
int homework_count = 0, break_loop = 0, choice = 0;
char display_type[100][50];

//头文件调用
#include "CalcEX.h"
#include "LeapCal.h"
#include "OddCal.h"
#include "EasySort.h"

//2022 ©W_Frank/Franoz235 20213993 (o゜▽゜)o☆
//2022-3-1 Ver1.0.0a
//2022-3-3 Ver1.1.0

int main(void) {
	int i;

	//初始化阶段一函数调用
	stack_init(STACK_MAX);
	CalcEX_Init_Stage1();
	LeapCal_Init_Stage1();
	OddCal_Init_Stage1();
	EasySort_Init_Stage1();

	while (1) {
		printf("##############################\n"
			"#                            #\n"
			"#     2022上半年课程作业     #\n"
			"#                            #\n"
			"##############################\n\n");
		printf("请选择作业类型:\n");
		for (i = 1; i <= homework_count; i++) {
			printf("%d.%s\n", i, display_type[i]);
		}
		printf("(1-%d)...", homework_count);
		scanf("%d", &choice);
		while (1) {
			system("cls");
			
			//函数入口
			CalcEX_Init_Stage2();
			LeapCal_Init_Stage2();
			OddCal_Init_Stage2();
			EasySort_Init_Stage2();
			
			system("cls");
			if (break_loop == 1) {	//判断是否退出循环
				break_loop = 0;
				break;
			}
		}
	}
}