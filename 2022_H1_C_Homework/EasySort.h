#pragma once
int EasySort_serial_number;
#define RANGE_NUMBERS_MAX 10000
int data[RANGE_NUMBERS_MAX];

int EasySort_Init_Stage1() {		// ��ʼ������ȡ���к�
	homework_count++;
	EasySort_serial_number = homework_count;
	sprintf(display_type[homework_count], "������");
}


int EasySort(int times) {

	int temp, i, n;
	for (n = 0; n < times; n++) {
		for (i = 0; i < times; i++) {
			if (data[i] > data[i + 1]) {
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
	printf("������Ҫ����ĸ���(����-1�˳�)��");
	scanf("%d", &numbers);
	if (numbers == -1)		//�˳��ж�
		return 1;
	else {
		printf("�����������Ҫ����������ÿո����:\n");
		for (i = 0; i < numbers; i++) scanf_s("%d", &data[i]);
		EasySort(numbers);
		while (1) {
			printf("1.��С�������\n2.�Ӵ�С���\n(1/2).....");
			scanf("%d", &odd);
			if (odd == 1) {
				printf("����Ľ��Ϊ:");
				for (i = 0; i < numbers; i++)
					printf("%d ", data[i]);
				printf("\n");
				system("pause");
				break;
			}
			else if (odd == 2) {
				printf("����Ľ��Ϊ:");
				for (i = numbers-1; i >= 0; i--)
					printf("%d ", data[i]);
				printf("\n");
				system("pause");
				break;
			}
			else
				system("cls");
		}
		return 0;
	}
}

int EasySort_Init_Stage2() {		//�������
	if (choice == EasySort_serial_number)
		if (EasySort_main() == 0)
			break_loop = 0;
		else
			break_loop = 1;
}