#pragma once

//2022 ©W_Frank/Franoz235 20213993 (づ｡◕‿‿◕｡)づ
//2022-3-1 Ver1.0.0

int CalcEX_serial_number;

int CalcEX_Init_Stage1() {		// 初始化并获取序列号
	homework_count++;
	CalcEX_serial_number = homework_count;
	sprintf(display_type[homework_count], "几何计算器");
}

double MathRectangleAera(double In1, double In2) {	//求长方形面积
	return In1 * In2;
}

double MathSquareAera(double In) {	//求正方形面积
	return In * In;
}

double MathCircleAera(double In) {	//求圆面积
	return In * In * Pi;
}

double MathTriangleAera_1(double In1, double In2, double In3) {	//海伦公式求三角形面积
	double p = (In1 + In2 + In3) / 2;
	return sqrt(p * (p - In1) * (p - In2) * (p - In3));
}

double MathTriangleAera_2(double In1, double In2) {	//长高求三角形面积
	return In1 * In2 / 2;
}

double MathCuboidVolume(double In1, double In2, double In3) {	//求长方体体积
	return In1 * In2 * In3;
}

double MathCubeVolume(double In) {	//求正方体体积
	return In * In * In;
}

double MathBallVolume(double In) {	//求球体积
	return In * In * In * Pi * 4 / 3;
}

double MathCuboidSurfaceAera(double In1, double In2, double In3) {	//求长方体表面积
	return (MathRectangleAera(In1, In2) * 2) + (MathRectangleAera(In1, In3) * 2) + (MathRectangleAera(In2, In3) * 2);
}

double MathBallSurfaceAera(double In) {	//求球表面积
	return 4 * Pi * In * In;
}

int CalcEX_main(void) {		//计算器主函数
	double In[3], out;
	char in;
	printf("请输入要需要计算的类型：\n"
		"A.求长方形面积\n"
		"B.求正方形面积\n"
		"C.求圆面积\n"
		"D.求三角形面积(三边)\n"
		"E.求三角形面积(长高)\n"
		"F.求长方体体积\n"
		"G.求正方体体积\n"
		"H.求球体积\n"
		"I.求长方体表面积\n"
		"J.求球表面积\n"
		"K.返回上一目录\n"
		"(A-K)...");
	in = getchar();
	scanf("%c", &in);
	switch (in) {
	case 'A':
		printf("请输入长方形的两边边长（中间用空格隔开）：");
		scanf("%lf %lf", &In[0], &In[1]);
		printf("长方形的面积为%.2lf", MathRectangleAera(In[0], In[1]));
		break;
	case 'B':
		printf("请输入正方形的边长：");
		scanf("%lf", &In[0]);
		printf("正方形的面积为%.2lf", MathSquareAera(In[0]));
		break;
	case 'C':
		printf("请输入圆的半径：");
		scanf("%lf", &In[0]);
		printf("圆的面积为%.2lf", MathCircleAera(In[0]));
		break;
	case 'D':
		printf("请输入三角形的三边边长（中间用空格隔开）：");
		scanf("%lf %lf %lf", &In[0], &In[1], &In[2]);
		printf("三角形的面积为%.2lf", MathTriangleAera_1(In[0], In[1], In[2]));
		break;
	case 'E':
		printf("请输入三角形的长与高（中间用空格隔开）：");
		scanf("%lf %lf", &In[0], &In[1]);
		printf("三角形的面积为%.2lf", MathTriangleAera_2(In[0], In[1]));
		break;
	case 'F':
		printf("请输入长方体的三边边长（中间用空格隔开）：");
		scanf("%lf %lf %lf", &In[0], &In[1], &In[2]);
		printf("长方体的体积为%.2lf", MathCuboidVolume(In[0], In[1], In[2]));
		break;
	case 'G':
		printf("请输入正方体的边长：");
		scanf("%lf", &In[0]);
		printf("正方体的体积为%.2lf", MathCubeVolume(In[0]));
		break;
	case 'H':
		printf("请输入球的半径：");
		scanf("%lf", &In[0]);
		printf("球的体积为%.2lf", MathBallVolume(In[0]));
		break;
	case 'I':
		printf("请输入长方体的三边边长（中间用空格隔开）：");
		scanf("%lf %lf %lf", &In[0], &In[1], &In[2]);
		printf("长方体的表面积为%.2lf", MathCuboidSurfaceAera(In[0], In[1], In[2]));
		break;
	case 'J':
		printf("请输入球的半径：");
		scanf("%lf", &In[0]);
		printf("球的表面积为%.2lf", MathBallSurfaceAera(In[0]));
		break;
	case'K':
		return 1;
	default:
		system("cls");
		return 0;
	}
	printf("\n");
	system("pause");
	system("cls");
	return 0;
}
int CalcEX_Init_Stage2() {		//加载入口
	if (choice == CalcEX_serial_number)
		if (CalcEX_main() == 0)
			break_loop = 0;
		else
			break_loop = 1;
}