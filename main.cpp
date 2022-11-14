#include <stdio.h>

//2つの値を比べるMin関数
template <typename T>
T Min(T a, T b) {
	//値を比較
	if (a <= b) {
		return static_cast<T>(a);
	}	
	return static_cast<T>(b);
}

//例外(char型)
template< >
char Min(char a, char b) {
	printf("数字は代入出来ません。\n");
	return 0;
}

//ここからメイン
int main() {
	//関数を使用して値を代入
	printf("%d\n", Min<int>(1, 4));
	printf("%f\n", Min<float>(1.1f, 4.1f));
	printf("%lf\n", Min<double>(5.0f, 2.2f));
	Min<char>('a', 'b');

	return 0;
}