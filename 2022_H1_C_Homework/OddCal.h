#pragma once
int OddCal_serial_number;

int OddCal_Init_Stage1() {		// 初始化并获取序列号
	homework_count++;
	OddCal_serial_number = homework_count;
	sprintf(display_type[homework_count], "求基数和");
}

int OddCal(int In) {	//递归求基数和
	if (In > 0)
		if (In % 2 == 1)
			return In + OddCal(In - 2);
		else
			return OddCal(In - 1);
	return 0;
}

int OddCal_main() {		//主函数
	int In;
	printf("请输入需要求多少个数以内的基数和(输入-1退出)：");
	scanf("%d", &In);
	if (In == -1)		//退出判断
		return 1;
	else if (In >= 0) {
		printf("0到%d的基数和：%d\n", In, OddCal(In));
		system("pause");
		return 0;
	}
	return 0;
}

int OddCal_Init_Stage2() {		//加载入口
	if (choice == OddCal_serial_number)
		if (OddCal_main() == 0)
			break_loop = 0;
		else
			break_loop = 1;
}