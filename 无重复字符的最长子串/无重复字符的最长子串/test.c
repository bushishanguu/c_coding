#define _CRT_SECURE_NO_WARNINGS 1
int lengthOfLongestSubstring(char * s){
	int prior = 0; //�ϴ�״̬����Ӵ��ĳ���
	int left = 0;
	int dict[256] = { 0 }; //ӳ��ASCII��
	int right = 1; //��ʾ�ַ����е�right���ַ�
	int i;

	while (*s != '\0'){
		i = *s - 0; //�ַ�ת��Ϊ����
		if (dict[i] > left)
			left = dict[i];
		dict[i] = right;
		prior = (prior>right - left) ? prior : right - left; //right��ֵ�ȶ�Ӧ�������±��1
		s++;
		right++;
	}
	return prior;
}
