#pragma once
int stack[10000], stack_top = 0;

//���ڸ���ʹ�õĶ�ջ������վ����10000

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