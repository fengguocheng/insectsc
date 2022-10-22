#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[30] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//
//    char* ret = arr;
//    int count = 0;
//    int length = 0;
//    while (*ret != '\0')
//    {
//        if (*ret == ' ')
//            count++;
//        else
//        {
//            ret++;
//            length++;
//        }
//    }
//    int newlength = length + 2 * count;
//    if (newlength > len)
//        return 0;
//    while (length && newlength > length)
//    {
//        if (arr[newlength] == ' ')
//        {
//            arr[newlength--] = '0';
//            arr[newlength--] = '2';
//            arr[newlength--] = '%';
//        }
//        else
//        {
//            arr[newlength--] = arr[length];
//        }
//        length--;
//    }
//    printf("%s", arr);
//    return 0;
//}
#include <stdio.h>
#include <string.h>
char* replace(char* arr, int len)
{
    int count = 0;
    int length = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == ' ')
        {
            count++;
        }
            length++;
        i++;
    }
    int newlength = length + 2 * count;
    if (newlength > len)
        return 0;
    int len1 = newlength;
    int len2 = length;
    while (len2 && len1 > len2)
    {
        if (arr[len2] == ' ')
        {
            arr[len1--] = '0';
            arr[len1--] = '2';
            arr[len1--] = '%';
        }
        else
        {
            arr[len1--] = arr[len2];
        }
        --len2;
    }
    return arr;
}
int main()
{
    char arr[30] = { "We Are Happy" };
    char* ret = replace(arr, 30);
    printf("%s", ret);
    return 0;
}