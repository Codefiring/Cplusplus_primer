#include<iostream>
int main()
{
	printf("The size of bool:          %d bytes -- %d bits\n", sizeof(bool),8*sizeof(bool));
	printf("The size of char:          %d bytes -- %d bits\n", sizeof(char),8*sizeof(char));
	printf("The size of wchar_t:       %d bytes -- %d bits\n", sizeof(wchar_t),8*sizeof(wchar_t));
	printf("The size of char16_t:      %d bytes -- %d bits\n", sizeof(char16_t),8*sizeof(char16_t));
	printf("The size of char32_t       %d bytes -- %d bits\n", sizeof(char32_t),8*sizeof(char32_t));
	printf("The size of int:           %d bytes -- %d bits\n", sizeof(int),8*sizeof(int));
	printf("The size of long:          %d bytes -- %d bits\n", sizeof(long),8*sizeof(long));
	printf("The size of long long:     %d bytes -- %d bits\n", sizeof(long long),8*sizeof(long long));
	printf("The size of float: 	       %d bytes -- %d bits\n", sizeof(float),8*sizeof(float));
	printf("The size of double:        %d bytes -- %d bits\n", sizeof(double),8*sizeof(double));
	printf("The size of long double:   %d bytes -- %d bits\n", sizeof(long double),8*sizeof(long double));
	return 0;
}