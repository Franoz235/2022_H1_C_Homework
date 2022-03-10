#pragma once
int EasySort_serial_number;

int EasySort_Init_Stage1() {		// 初始化并获取序列号
	homework_count++;
	EasySort_serial_number = homework_count;
	sprintf(display_type[homework_count], "简单排序");
}


int EasySort(int times,int*data) {

	int temp, i, n;
	for (n = 0; n < times; n++) {
		for (i = 0; i < times; i++) {
			if (data[i] < data[i + 1]) {
				temp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = temp;
			}
		}
	}
}

int EasySort_main() {
	//Range
	int i, numbers, odd;
	int* data;
	printf("请输入要排序的个数(输入-1退出)：");
	scanf("%d", &numbers);
	if (numbers == -1)		//退出判断
		return 1;
	else {
		data = (int*)malloc(sizeof(int) * numbers);
		printf("请逐个输入需要排序的数，用空格隔开:\n");
		getchar();
		for (i = 0; i < numbers; i++) 
			scanf_s("%d", &data[i]);
		EasySort(numbers,data);
		while (1) {
			printf("1.从小到大输出\n2.从大到小输出\n(1/2).....");
			scanf("%d", &odd);
			if (odd == 2) {
				printf("排序的结果为:");
				for (i = 0; i < numbers; i++)
					printf("%d ", data[i]);
				printf("\n");
				system("pause");
				break;
			}
			else if (odd == 1) {
				printf("排序的结果为:");
				for (i = numbers-1; i >= 0; i--)
					printf("%d ", data[i]);
				printf("\n");
				system("pause");
				break;
			}
			else
				system("cls");
		}
		free(data);
		return 0;
	}
}

int EasySort_Init_Stage2() {		//加载入口
	if (choice == EasySort_serial_number)
		if (EasySort_main() == 0)
			break_loop = 0;
		else
			break_loop = 1;
}