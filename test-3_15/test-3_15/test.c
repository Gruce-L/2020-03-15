#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

	//一、单目操作符
		
		//1.~:把一个数的二进制按位取反
			//int main(){
				//int a = 10;
				//int b = ~a;
		
				//printf("%d\n", b);
			//return 0;
			//}


		//2.--和++
			//int main(){
				//int a = 10;
				//int b = a--;	//后置--：先使用a的值赋给b，然后a自减
				//int c = --a;	//前置--：先--，再把a的值赋给c
				//int d = ++a;	//前置++：a先自加赋给d，然后再输出a
				//int e = a++;	//后置++：a的值先赋给e，然后a自增

				//printf("b = %d a = %d\n", b, a);
				//printf("c = %d a = %d\n", c, a);
				//printf("d = %d a = %d\n", d, a);
				//printf("e = %d a = %d\n", e, a);
			//return 0;
			//}

	//二、关键字

		//1.unsigned 和 typedef
			//typedef unsigned int u_int;		//自己定义的类型，把unsigned int 定义成 u_int
			//								//类型重命名			
			//
			//int main(){
			//
			//	int a = 10;		//局部变量 - auto
			//	u_int age;
			//
			//	return 0;
			//}

/*
sizeof和strlen的区别：
	1.他们之间就没有什么联系
	2.strlen()是库函数，只能用来求字符串的长度（从字符串的开始位置向后数字符的个数，直到'\0',但不包括'\0'）
	  而sizeof()是操作符，是用来计算某个对象或类型的大小，单位是字节
*/		

		//2.register - 寄存器
			//int main(){
			//	register int a = 0;		//假设a未来会被频繁大量使用
			//							//register 就是建议把a放在寄存器中，是否放入还需要判断
			//	return 0；
			//}

		//3，static（静态）可以修饰变量和函数
			//static的作用

				//（1）.修饰局部变量：延长变量的生命周期，出了局部范围，也不死亡，保持本次运算结果
						//void test(){
						//	
						//	static int a = 1;	//局部变量		
						//						//记住int 和 static int 区别
						//	a++;
						//	printf("%d\n", a);
						//
						//}
						//
						//int main(){
						//	
						//	int i = 0;
						//	while (i < 10){
						//		test();
						//		i++;
						//	}
						//
						//	return 0;
						//}

				//（2）.修饰全局变量：改变了全局变量的作用域，让作用域变小
									  //只能在自己所在的.c文件中使用

						//extern int g_val;		//用来声明其他文件（外部）符号
						//						//static限制了作用域，其他类不能引用
						//int main(){
						//
						//	printf("%d\n", g_val);
						//
						//	return 0;
						//}
			
				//（3）.修饰函数
						//static 改变了函数的作用域，同理（2）
						//这个被修饰的函数只能在自己的源文件内部使用，其他源文件不能使用
					
						//int main(){
						//	int a = 10;
						//	int b = 20;
						//	int sum = Add(a, b);
						//
						//	printf("%d\n", sum);
						//
						//	return 0;
						//}

		//4.#define定义标识常量和宏
				//#define定义宏
					//int Max(int x, int y){
					//	return (x > y) ? (x) : (y);
					//}
					//
					//#define MAX(X, Y) ((X)>(Y) ? (X) : (Y))
					//
					//int main(){
					//	int a = 10;
					//	int b = 20;
					//	
					//	int max = Max(a, b);		//函数
					//	max = MAX(a, b);			//宏
					//
					//	printf("%d\n", max);
					//	printf("%d\n", max);
					//
					//	return 0;
					//}
	//三、指针
				//int main(){
				//	int a = 10;		//创建整型变量a，并且赋值10
				//					//要存储10，要有内存空间
				//  char ch  = 'a';
				//					//a在创建的时候，就已经申请了4个字节的空间
				//	int* p = &a;	//&：取地址操作符
				//					//p：指针变量,p存的是a的地址
				//  char* pc = &ch;
				//	printf("%p\n", p);
				//
				//	return 0;
				//}

				//int main(){
				//	int a = 10;
				//	int * pa = &a;
				//	*pa;	//解引用操作符  *pa就是a，寻找a
				//	*pa = 20;		//把a的值改成20
				//}

		//指针大小：32bit平台是4，64bit平台是8
				//int main(){
				//	char ch = 'a';
				//	int a = 10;
				//	char* pc = &ch;
				//	int* pa = &a;
				//
				//	printf("%d\n", sizeof(pc));		//4
				//	printf("%d\n", sizeof(pa));		//4
				//
				//	return 0;
				//}
