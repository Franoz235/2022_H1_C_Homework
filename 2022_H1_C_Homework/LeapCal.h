#pragma once

//2022 ©W_Frank/Franoz235 20213993 (　ﾟ∀ﾟ) ﾉ♡
//2022-3-1 Ver1.0.1	修复了负数年份不正常工作的Bug

int LeapCal_serial_number;

int LeapCal_Init_Stage1() {		// 初始化并获取序列号
	homework_count++;
	LeapCal_serial_number = homework_count;
	sprintf(display_type[homework_count], "闰年计算器");
}

int LeapCal(int year) {			//平年闰年判断
	if (year > 0)
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 3200 != 0) || (year % 3200 == 0 && year % 172800 == 0))		//正数年份
			return 1;
		else
			return 0;
	else if (year < 0)
		if ((year % 4 == -1 && year % 100 != -1) || (year % 400 == -1 && year % 3200 != -1) || (year % 3200 == -1 && year % 172800 == -1))		//负数年份
			return 1;
		else
			return 0;
	else
		return -1;
}

int LeapCal_main() {		//计算器主函数
	int input_num, result;
	printf("##############################\n"
		"#                            #\n"
		"#       平年闰年计算器       #\n"
		"#                            #\n"
		"##############################\n"
		"请输入公元年份以计算，输入0返回\n\n");
	scanf("%d", &input_num);
	result = LeapCal(input_num);
	if (result == 1)
		printf("年份为闰年\n");
	else if (result == 0)
		printf("年份为平年\n");
	else if (result == -1)
		return 1;
	system("pause");
	return 0;
}

int LeapCal_Init_Stage2() {		//加载入口
	if (choice == LeapCal_serial_number)
		if (LeapCal_main() == 0)
			break_loop = 0;
		else
			break_loop = 1;
}