#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

	//һ����Ŀ������
		
		//1.~:��һ�����Ķ����ư�λȡ��
			//int main(){
				//int a = 10;
				//int b = ~a;
		
				//printf("%d\n", b);
			//return 0;
			//}


		//2.--��++
			//int main(){
				//int a = 10;
				//int b = a--;	//����--����ʹ��a��ֵ����b��Ȼ��a�Լ�
				//int c = --a;	//ǰ��--����--���ٰ�a��ֵ����c
				//int d = ++a;	//ǰ��++��a���ԼӸ���d��Ȼ�������a
				//int e = a++;	//����++��a��ֵ�ȸ���e��Ȼ��a����

				//printf("b = %d a = %d\n", b, a);
				//printf("c = %d a = %d\n", c, a);
				//printf("d = %d a = %d\n", d, a);
				//printf("e = %d a = %d\n", e, a);
			//return 0;
			//}

	//�����ؼ���

		//1.unsigned �� typedef
			//typedef unsigned int u_int;		//�Լ���������ͣ���unsigned int ����� u_int
			//								//����������			
			//
			//int main(){
			//
			//	int a = 10;		//�ֲ����� - auto
			//	u_int age;
			//
			//	return 0;
			//}

/*
sizeof��strlen������
	1.����֮���û��ʲô��ϵ
	2.strlen()�ǿ⺯����ֻ���������ַ����ĳ��ȣ����ַ����Ŀ�ʼλ��������ַ��ĸ�����ֱ��'\0',��������'\0'��
	  ��sizeof()�ǲ�����������������ĳ����������͵Ĵ�С����λ���ֽ�
*/		

		//2.register - �Ĵ���
			//int main(){
			//	register int a = 0;		//����aδ���ᱻƵ������ʹ��
			//							//register ���ǽ����a���ڼĴ����У��Ƿ���뻹��Ҫ�ж�
			//	return 0��
			//}

		//3��static����̬���������α����ͺ���
			//static������

				//��1��.���ξֲ��������ӳ��������������ڣ����˾ֲ���Χ��Ҳ�����������ֱ���������
						//void test(){
						//	
						//	static int a = 1;	//�ֲ�����		
						//						//��סint �� static int ����
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

				//��2��.����ȫ�ֱ������ı���ȫ�ֱ��������������������С
									  //ֻ�����Լ����ڵ�.c�ļ���ʹ��

						//extern int g_val;		//�������������ļ����ⲿ������
						//						//static�����������������಻������
						//int main(){
						//
						//	printf("%d\n", g_val);
						//
						//	return 0;
						//}
			
				//��3��.���κ���
						//static �ı��˺�����������ͬ��2��
						//��������εĺ���ֻ�����Լ���Դ�ļ��ڲ�ʹ�ã�����Դ�ļ�����ʹ��
					
						//int main(){
						//	int a = 10;
						//	int b = 20;
						//	int sum = Add(a, b);
						//
						//	printf("%d\n", sum);
						//
						//	return 0;
						//}

		//4.#define�����ʶ�����ͺ�
				//#define�����
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
					//	int max = Max(a, b);		//����
					//	max = MAX(a, b);			//��
					//
					//	printf("%d\n", max);
					//	printf("%d\n", max);
					//
					//	return 0;
					//}
	//����ָ��
				//int main(){
				//	int a = 10;		//�������ͱ���a�����Ҹ�ֵ10
				//					//Ҫ�洢10��Ҫ���ڴ�ռ�
				//  char ch  = 'a';
				//					//a�ڴ�����ʱ�򣬾��Ѿ�������4���ֽڵĿռ�
				//	int* p = &a;	//&��ȡ��ַ������
				//					//p��ָ�����,p�����a�ĵ�ַ
				//  char* pc = &ch;
				//	printf("%p\n", p);
				//
				//	return 0;
				//}

				//int main(){
				//	int a = 10;
				//	int * pa = &a;
				//	*pa;	//�����ò�����  *pa����a��Ѱ��a
				//	*pa = 20;		//��a��ֵ�ĳ�20
				//}

		//ָ���С��32bitƽ̨��4��64bitƽ̨��8
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
