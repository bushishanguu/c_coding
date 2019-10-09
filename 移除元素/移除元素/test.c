#define _CRT_SECURE_NO_WARNINGS 1
int removeElement(int* nums, int numsSize, int val){
	if (numsSize == 0)
		return 0;

	// ����ͷβָ��
	int * left = nums;
	int * right = nums + numsSize - 1;
	while (left < right) {
		// ���������ҵ����� val ��λ��
		while (*left != val && left < right)
			left++;
		// ���������ҵ������� val ��λ��
		while (*right == val && left < right)
			right--;
		// ����ָ���Ԫ�ظ�����ָ��Ԫ��
		*left = *right;
		right--;
	}
	// �����ָ���Ԫ�ز��� val���������ָ�봦��Ԫ��
	return left - nums + (*left != val);
}
