#pragma once
int OddCal_serial_number;

int OddCal_Init_Stage1() {		// ��ʼ������ȡ���к�
	homework_count++;
	OddCal_serial_number = homework_count;
	sprintf(display_type[homework_count], "�������");
}

int OddCal(int In) {	//�ݹ��������
	if (In > 0)
		if (In % 2 == 1)
			return In + OddCal(In - 2);
		else
			return OddCal(In - 1);
	return 0;
}

int OddCal_main() {		//������
	int In;
	printf("��������Ҫ����ٸ������ڵĻ�����(����-1�˳�)��");
	scanf("%d", &In);
	if (In == -1)		//�˳��ж�
		return 1;
	else if (In >= 0) {
		printf("0��%d�Ļ����ͣ�%d\n", In, OddCal(In));
		system("pause");
		return 0;
	}
	return 0;
}

int OddCal_Init_Stage2() {		//�������
	if (choice == OddCal_serial_number)
		if (OddCal_main() == 0)
			break_loop = 0;
		else
			break_loop = 1;
}