#include <stdio.h>

//2�̒l���ׂ�Min�֐�
template <typename T>
T Min(T a, T b) {
	//�l���r
	if (a <= b) {
		return static_cast<T>(a);
	}	
	return static_cast<T>(b);
}

//��O(char�^)
template< >
char Min(char a, char b) {
	printf("�����͑���o���܂���B\n");
	return 0;
}

//�������烁�C��
int main() {
	//�֐����g�p���Ēl����
	printf("%d\n", Min<int>(1, 4));
	printf("%f\n", Min<float>(1.1f, 4.1f));
	printf("%lf\n", Min<double>(5.0f, 2.2f));
	Min<char>('a', 'b');

	return 0;
}