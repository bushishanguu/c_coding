#define _CRT_SECURE_NO_WARNINGS 1
int strStr(char * haystack, char * needle){
	// needle �ǿ��ַ�������Ϊ�����ַ������������ַ���������Ϊ 0
	if (*needle == 0) return 0;
	// haystack �ǿ��ַ�������Ϊ���������κ��ַ��������ַ������⣩
	if (*haystack == 0) return -1;

	// ��� haystack ��ͷָ��
	char * head = haystack;
	// ɨ��ƫ��
	int offset;
	// ���� haystack ���Ӵ�
	while (*haystack) {
		offset = 0;
		while (1) {
			// ���� needle ĩβ����Ϊ��ƥ����
			if (needle[offset] == 0) return haystack - head;
			// ���� haystack ĩβ����Ϊû��ƥ��
			if (haystack[offset] == 0) return -1;
			// ���������������ѭ��
			if (haystack[offset] != needle[offset]) break;
			offset++;
		}
		// �ƶ����¸��Ӵ�
		haystack++;
	}
	return -1;
}

