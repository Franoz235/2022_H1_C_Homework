#pragma once
int stack_top = 0;
int* stack;
//���ڸ���ʹ�õĶ�ջ������վ����10000
int stack_init(int stack_max) {
	stack = (int*)malloc(sizeof(int) * stack_max);
}
int push(int Push_data) {		//��ջ����
	if (stack_top < 10000) {
		stack[stack_top] = Push_data;
		if (stack[stack_top] = Push_data) {
			stack_top++;
			return 1;
		}
	}
	return 0;
}

int pop(void) {		//��ջ����
	if (stack_top > 0) {
		stack_top--;
		return stack[stack_top];
	}
	return 0;
}