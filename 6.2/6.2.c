#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	int ret = 0;
	int sum = 0;
	for (int i = 0; i < y; i++)
	{
		ret = ret * 10 + x;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		right--;
		left++;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int sz = strlen(arr);
	reverse(arr, arr + k - 1);//left
	reverse(arr + k, arr + sz - 1);//right
	reverse(arr, arr + sz - 1);//total
}

int main()
{
	char arr[] = { "abcdef" };
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}
