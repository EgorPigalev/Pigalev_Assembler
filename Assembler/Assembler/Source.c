#include <stdio.h>

int sum(int a, int b)
{
	int n = a + b;
	return n;
}

//int sum1(int a, int b)
//{
//	int c;
//	__asm
//	{
//		mov eax, a
//		add eax, b
//		mov c, eax
//	}
//	return c;
//}

int razn(int a, int b)
{
	int n = a - b;
	return n;
}

//int razn1(int a, int b)
//{
//	int c;
//	__asm
//	{
//		mov eax, a
//		sub eax, b
//		mov c, eax
//	}
//	return c;
//}

int multiplication(int a, int b)
{
	int n = a * b;
	return n;
}

//int multiplication1(int a, int b)
//{
//	int c;
//	__asm
//	{
//		mov eax, 0
//		mov ebx, 0
//		m1:
//		add eax, a
//		add ebx, 1
//		cmp ebx, b
//		jnz m1
//		mov c, eax
//	}
//	return c;
//}

double division(double a, double b)
{
	double n = a / b;
	return n;
}

//int division1(int a, int b)
//{
//	int c;
//	__asm
//	{
//		mov eax, a
//		mov edx, 0
//		div b
//		mov c, eax
//	}
//	return c;
//}

int ost(int a, int b)
{
	int c = a % b;
	return c;
}

//int ost1(int a, int b)
//{
//	int c;
//	__asm
//	{
//		mov eax, a
//		mov edx, 0
//		div b
//		mov c, edx
//	}
//	return c;
//}

int comparisonTwo(int a, int b)
{
	int c;
	if (a > b)
	{
		c = 1;
	}
	if (a < b)
	{
		c = 2;
	}
	if (a == b)
	{
		c = 0;
	}
	return c;
}

//int comparisonTwo1(int a, int b)
//{
//	int c = 0;
//	__asm
//	{ 
//		mov eax, a
//		cmp eax, b
//		jg m1
//		jl m2
//		mov c, 0
//		jmp m3
//		m1:
//		mov c, 1
//		jmp m3
//		m2:
//		mov c,2
//		m3:
//	}
//	return c;
//}

int comparisonThree(int a, int b, int c)
{
	int r = 0;
	if (a > b && a > c)
	{
		r = 1;
	}
	if (b > a && b > c)
	{
		r = 2;
	}
	if (c > a && c > b)
	{
		r = 3;
	}
	if (a == b && b > c)
	{
		r = 12;
	}
	if (a < b && b == c)
	{
		r = 23;
	}
	if (a == c && c > b)
	{
		r = 13;
	}
	if (a == b && b == c)
	{
		r = 123;
	}
	return r;
}

//int comparisonThree1(int a, int b, int c)
//{
//	int r;
//	__asm
//	{
//		mov eax, a
//		mov ebx, b
//		cmp eax, ebx
//		jg m1
//		m4:
//		cmp ebx, a
//		jg m2
//		m5:
//		cmp c, eax
//		jg m3
//		m6:
//		cmp eax, b
//		je m12
//		m7:
//		cmp eax, c
//		je m13
//		m8:
//		cmp ebx, c
//		je m23
//		m9:
//		mov r, 123
//		jmp m123
//		m1:
//		cmp eax, c
//		jg m11
//		jmp m4
//		m11:
//		mov r, 1
//		jmp m123
//		m2:
//		cmp ebx, c
//		jg m22
//		jmp m5
//		m22:
//		mov r, 2
//		jmp m123
//		m3:
//		cmp c, ebx
//		jg m33
//		jmp m6
//		m33:
//		mov r, 3
//		jmp m123
//		m12:
//		cmp eax, c
//		jg m121
//		jmp m7
//		m121:
//		mov r, 12
//		jmp m123
//		m13:
//		cmp eax, b
//		jg m131
//		jmp m8
//		m131:
//		mov r, 13
//		jmp m123
//		m23:
//		cmp ebx, a
//		jg m231
//		jmp m9
//		m231:
//		mov r, 23
//		m123:
//	}
//	return r;
//}

void swapping(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

//void swapping1(int *a, int *b)
//{
//	int a1 = *a;
//	int b1 = *b;
//	__asm
//	{
//		mov eax, a1
//		mov ebx, b1
//		mov a1, ebx
//		mov b1, eax
//	}
//	*a = a1;
//	*b = b1;
//}

int main()
{
	int p = 10;
	for (size_t i = 0; i < 1000000; i++)
	{
		comparisonThree(4, 6, 3);
		if (i + 1 == p)
		{
			printf("%d\n", clock());
			p = p * 10;
		}
	}
	return 0;
}