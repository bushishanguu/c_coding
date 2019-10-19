#define _CRT_SECURE_NO_WARNINGS 1

int myAtoi(char * str){
	// �Ƴ���ͷ�Ŀո�
	while (*str == ' ')
		++str;

	// ��¼������
	int flag = 1;
	if (*str == '-') {
		flag = -1;
		++str;
	}
	else if (*str == '+')
		++str;

	int ret = 0;
	// ��Ϊֻ��ʹ�� 32 λ int����˽� ret �� 10 ������ INT_MAX �ȽϿ��ܻ����
	// ���ʹ�� ret �� INT_MAX/10 �Ƚ�
	int div = INT_MAX / 10;
	while (*str <= '9' && *str >= '0') {
		int dig = *str - '0';
		// �� ret �� div С���� ret * 10 + dig Ҳһ��С�� INT_MAX���������
		// �� ret �� div ��ȣ�ֻ�� dig �� 8 Сʱ�������
		// �˴�������Ҫ�����ֿ����ۣ�INT_MAX ��λ�� 7��INT_MIN ��λ�� 8
		// -INT_MIN �� int �л�������� dig == 8 ʱֱ�ӵ����������
		if (ret < div || (ret == div && dig < 8)) {
			ret = ret * 10 + dig;
			++str;
		}
		// ��������������Է���ֵ
		else
			return (flag == 1 ? INT_MAX : INT_MIN);
	}
	return flag * ret;
}

