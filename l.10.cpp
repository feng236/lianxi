// l.10.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	long long b = 1;
//	while (a <= 100)
//	{
//		b = b * a;
//		a++;
//
//	}
//	printf("%lld", b);
//	return 0;
//}
//#include <stdio.h>

//int main() {
//    long long int factorial = 1;  // 使用长整型存储阶乘结果
//    int i;
//
//    for (i = 1; i <= 100; i++) {
//        factorial *= i;  // 累乘计算阶乘
//    }
//
//    printf("The factorial of 100 is: %lld\n", factorial);
//    return 0;
//}
//int main()
//{
//	int a,i;
//	for (a = 1; a < 100; a++)
//	{
//
//		for (i = 2; i < a; i++)
//		{
//			if (a % i == 0)
//				break;
//		}
//		if (i == a)
//		{
//			cout << a <<" ";
//		}
//	}
//}
// 
//int main()
//{
//	long n;
//	long m;
//	scanf("%d",&m);
//	double pai = 0;
//	for (n = 1; n <= m; n++)
//	{
//		pai = pai + pow(-1, n + 1) * (1.0 / (2 * n - 1));
//	}
//	printf("%.19lf",  4*pai);
//
// }
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c;
//	printf("1 1 ");
//	for (int i = 1; i <= 38;i++)
//	{
//		c = a + b;
//		cout << c<<" ";
//		a = b;
//		b=c;
//
//	}
//
//}
//
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	double dt = (b * b - 4 * a * c);
//	if (dt >= 0)
//	{
//		if (dt > 0)
//		{
//			cout << "x值为：" << "\n";
//			cout << (-b - sqrt(dt)) * 1.0 / (2 * a) << "\n" << (-b + sqrt(dt)) * 1.0 / (2 * a);
//		}
//		else
//		{
//			cout << "x值为：" << "\n";
//			cout << (-b) * 1.0 / (2 * a);
//		}
//
//	}
//	else
//		cout << "该方程无解" << "\n";
//}
//int main()
//{
//	int a;
//	cout << "请输入一个四位数：";
//	cin >> a;
//	while (a > 0)
//	{
//		cout << (a % 10);
//		a = a / 10;
//	}
//}
//
//int main()
//{
//	int a, b, c;
//	cout << "请输入想判断的三边长：";
//	cin >> a >> b >> c;
//	if (a + b > c && a + c > b && b + c > a)
//		cout << "可以构成三角形";
//	else
//		cout << "不能构成三角形";
//}


//int main()
//{
//
//	int a,i,m;
//	cout << "请输入一个四位数：";
//	cin >> a;
//	m = a;
//	for (i = 1; i < m; i++)
//	{
//		if (a == 0)
//			break;
//		cout << (a % 10);
//		a = a / 10;
//	}
//}
////
//int main()
//{
//	int a, b, c, d;
//	cout << "请输入四个1——9之间的整数：";
//	cin >> a >> b >> c >> d;
//	if (a + b - c + d == 24 || a - b + c + d == 24 || a * b - c + d == 24 || a + b + c + d == 24 || a + b * c + d == 24 
//		|| a + b + c * d == 24 || (a + b) * c - d == 24)
//		cout << "这四位数可以算出24";
//	else
//		cout << "这四位数不可以算出24";
//
//
//}
#include <math.h>
//int main()
//{
//	double pai = 3.1415926;
//	double angle = 0;
//	double x, y,r;
//	int n;
//	cout << "请输入圆心横纵坐标和半径和多边形边数";
//	cin >> x >> y >>r>> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//
//		angle = angle + 2 * pai / n;
//		printf("(%lf,%lf)\n", r * cos(angle) + x, r * sin(angle) + y);
//	}
//
//
//}
//int main()
//{
//	int a,m,i,c;
//	cout << "请输入一个正整数：";
//	cin >> a;
//	m = a;
//	cout << a << '=';
//	if (a == 1)
//		cout << a << '*';
//	for (i = 1; i < m; i++)
//	{
//		if (a == 1)
//			break;
//		for (c = 2; c <= a; c++)
//		{
//			if (a % c == 0)
//				break;
//		}
//		cout << c << '*';
//		a = a / c;
//	}
//	printf("\b");
//}
//int main()
//{
//	int a, b, c;//男人，女人，孩子的数量声明
//	for (a = 0; a <= 15; a++)
//	{
//		for (b = 0; b < 23; b++)
//		{
//			for (c = 0; c <= 44; c++)
//			{
//				if (3 * a + 2 * b + (c * 1.0) / 2 == 45  &&  a+b+c==45)
//					printf("男%d  女%d  孩子%d\n", a, b, c);
//			}
//		}
//	}
//int main()
//{
//	int a, i, m, c;
//	int d = 0;
//
//	cin >> a;
//	m = a;
//	for (i = 1; i < m; i++)
//	{
//		if (a == 0)
//			break;
//		c = a % 10;
//		d = d + c * c * c;
//		a = a / 10;
//	}
//
//}
//int main()
//{
//	int i, m;
//	int a[6];
//	for (i = 0; i < 6; i++)
//		cin >> a[i];
//	int min,nest;
//
//	for (m = 0; m < 6; m++)
//	{
//		for (int j = m + 1; j < 6; j++)
//		{
//			if (a[m] > a[j])
//			{
//				min = a[j];
//				nest = a[m];
//				a[m] = min;
//				a[j] = nest;
//			}
//		}
//	}
//
//
//	for (i = 0; i < 6; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
////int main()
//{
//	int i;
//	int a[5];
//	int max;
//	for (i = 0; i < 5; i++)
//		cin >> a[i];
//	for (max = a[0], i = 1; i<5;i++)//求最大值：
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//
//	cout << max;
//}

//
//int main()
//{
//	int a[5];
//	int i,c = 0;
//	for (i = 0; i < 5; i++) 
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		c = c + a[i];
//	}
//	float average = c * 1.0 / i;
//	float he,s = 0;
//	for (i = 0; i < 5; i++)
//	{
//		he = he + (a[i] - average) * (a[i] - average);
//	}
//	s = sqrt(he) / i;
//	cout << s;
//}
//int main()
//{
//	int a[32],i;
//	srand(time(0));
//	for (i = 0; i < 32; i++)
//	{
//		a[i] = rand();
//	}
//	for (i = 1; i < 31; i++)
//	{
//		if (a[i] > a[i - 1] && a[i] > a[i + 1])
//			cout << a[i]<<" ";
//	}
//}int main()
//{
//	int a[5][5];
//	srand(time(0));
//	int i,j;
//	for (i = 0; i <5 ; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			a[i][j] = rand();
//		}
//	}
//	for()
//}*/
//int main()
//{
//	int i = 0;
//	double a[5];
//	cout << "请输入五个整数，将输出最大值和最小值";
//	for (i = 0; i < 5; i++)
//	{
//		cin >> a[i];
//	}
//	double max, min,average;
//	max = min = a[0];
//	for(i=1;i<5;i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//		if (a[i] < min)
//		{
//			min = a[i];
//		}
//	}
//	
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		sum = sum + a[i];
//	}
//	average = sum * 1.0 / 5;
//	cout << max << "\n" << min << "\n" << average;
//
//}
//int main()
//{
//	int a[10];
//	int i = 0;
//	int d, b;
//	cout << "请输入十个整数，将以从大到小的顺序输出：";
//	for (i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (int j = i + 1; j< 10; j++)
//		{
//			if (a[j] > a[i])
//			{
//				d = a[j];
//				b = a[i];
//				a[i] = d;
//				a[j] = b;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i]<<"     ";
//	}
//}
//int main()
//{
//	srand(time(0));
//	int i = 0;
//	int a[100];
//	int b[10] = { 0 };//令所有数都为零
//	for (i = 0; i < 100; i++)
//	{
//		a[i] = rand() % 10;
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == a[i])
//			{
//				b[j]++;//利用j本身就是10以内数的特点进行次数加
//			}
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < 100; i++)
//	{
//		sum = sum + a[i];
//	}
//	double average = sum * 1.0 / 100;
//	double he = 0;
//	for (i = 0; i < 100; i++)
//	{
//		he += (a[i] - average) * (a[i] - average);
//	}
//	double fangcha = he * 1.0 / 100;
//	for (i = 0; i < 10; i++)
//	{
//		cout << b[i]<<"\n";//输出次数
//	}
//	cout << average << "   " << fangcha;
//}
//int main()
//{
//	int a[5][5];
//	int i, j;
//	srand(time(0));
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			a[i][j] = rand();
//		}
//	}
//	long sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		j = i;
//		sum += a[i][j];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		j = 4 - i;
//		sum += a[i][j];
//	}
//	cout << sum;
//
//}
//int main()
//{
//	int a[10];
//	int b[10] = { 0 };
//	int i ,j,max= 0;
//	cout << "请输入10以内整数，将会返回众数：\n";
//	for (i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	
//	/*for (i = 0; i < 10; i++) 
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == a[i])
//				b[j]++;
//		}
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		b[a[i]]++;//投票优化；
//	}
//	max = b[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (b[i] > max)
//		{
//			max = b[i];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		b[a[i]]++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (b[i] == max)
//		{
//			cout << i<<"\n";
//		}
//	}
//}
//int main()
//{
//	char a[30];
//	cin >> a;
//	int i;
//	/*for (i = 0; i < 30; i++)
//	{
//		if (a[i] == 0)
//			break;
//		if (a[i] >= 97 && a[i] <= 122)
//		{
//			a[i] = a[i] - 32;
//		}
//
//	}*/
//	
//}
//int main()
//{
//	char a[256];
//	char b[256];
//	cout << "请输入第一个字符串：\n";
//	gets_s(a);
//	cout << "请输入想接到后面的字符串：\n";
//	gets_s(b); 
//	int i = 0;
//	for (i = 0; i < 256; i++)
//	{
//		if (a[i] == 0)
//		{
//			for (int j = 0; j < 256; j++)
//			{
//				a[i] = b[j];
//				i++;
//				if (b[j] == 0)
//					goto here;
//			}
//		}
//	}
//here:
//	for (i = 0; i < 256; i++)
//	{
//		cout << a[i];
//		if (a[i] == 0)
//			break;
//	}
//}
//int main()
//{
//	char a[256];
//	gets_s(a);
//	char b;
//	cout << "请输入想要删除的字母：";
//	cin >> b;
//	int i = 0;
//	for (i = 0; i < 256; i++)
//	{
//		if (a[i] == b)
//		{
//			continue;
//		}
//		cout << a[i];
//		if (a[i] == 0)
//			break;
//	}
//}
//int main()
//{
//	char a[256];
//	char b[256];
//	char c[256];
//	cout << "请输入字符串：\n";
//	gets_s(a);
//	cout << "请输入想要的字符串：\n";
//	gets_s(b);
//	cout << "请输入要替换的字符串：\n";
//	gets_s(c);
//	int i = 0;
//	int h = 0;
//	int m,j,d;
//	for (i = 0; i < 256; i++)
//	{
//		if (c[i] == 0)
//		break;
//	}
//	m = i;
//	for (i = 0; i < 256; i++)
//	{
//		h = i;
//		for (j = 0; j < m; j++)
//		{
//			if (a[i] == c[j])
//			{
//				i++;
//			}
//			else
//				break;
//		}
//		if (j == m)
//		{
//			for (d = 0; d < 256; d++)
//			{
//				if (b[d] == 0)
//					break;
//				cout << b[d];
//			}
//			i = h + m-1;
//		}
//		else
//		{
//			i = h;
//			cout << a[i];
//		}
//		if (a[h] == 0)
//			break;
//	}
//}
//int main()
//{
//	char a[256];
//	char b[256];
//	cout << "请输入第一个字符串：\n";
//	gets_s(a);
//	cout << "请输入想接到后面的字符串：\n";
//	gets_s(b); 
//	int i = 0;
//	int k;
//	for (i = 0; i < 256; i++)
//	{
//		if (a[i] == 0)
//		{
//			break;
//		}
//	}
//	for (k = 0; k < 256; k++)
//	{
//		a[i] = b[k];
//		i++;
//		if (b[k] == 0)
//			break;
//	}
//	cout << a;
//}	
//int main()
//{
//	char a[256];
//	gets_s(a);
//	char b;
//	cout << "请输入想要删除的字母：";
//	cin >> b;
//	int i = 0;
//	for (i = 0; i < 256; i++)
//	{
//		if (a[i] == b)
//		{
//			for (int j = i; j < 256; j++)
//			{
//				if (a[j] == 0)
//					break;
//				a[j] = a[j + 1];
//			}
//		}
//		if (a[i] == 0)
//			break;
//	}
//	cout << a;
//}
//int main()
//{
//	char a[256];
//	char b[256];
//	char c[256];
//	char g[256];
//	cout << "请输入字符串：\n";
//	gets_s(a);
//	cout << "请输入想要的字符串：\n";
//	gets_s(b);
//	cout << "请输入要替换的字符串：\n";
//	gets_s(c);
//	int i = 0;
//	int h = 0;
//	int m, j, d,add;
//	int y = 0;
//	for (i = 0; i < 256; i++)
//	{
//		if (c[i] == 0)
//		break;
//	}
//	m = i;
//	for (i = 0; i < 256; i++)
//	{
//		h = i;
//		for (j = 0; j < m; j++)
//		{
//			if (a[i] == c[j])
//			{
//				i++;
//			}
//			else
//				break;
//		}
//		
//		if (j == m)
//		{
//			y = h;
//			for (d = 0; d < 256; d++)
//			{
//				if (b[d] == 0)
//					break;
//				g[y] = b[d];
//				y++;
//			}
//			
//		}
//		else
//		{
//			i = h;
//			g[y] = a[i];
//			y++;
//		}
//		if (a[h] == 0)
//			break;
//	}
//	cout << g;
//}

//int main()
//{
//	int* p;
//	int a ;
//	p = &a;
//	cout << p << "\n";
//	*p = 10;
//	cout << *p;
//
//}
//
//int main()
//{
//	char a[256];
//	char* p = a;
//	cin >> p;
//	int i= 0;
//	for (i = 0;; i++)
//	{
//		if (p[i] == 0)
//			break;
//	}
//	cout << i;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int* p = new int[n];
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		p[i] = rand() % 10;
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << p[i];
//		cout << "\n";
//	}
//	delete []p;
//
//}
//int main()
//{
//	char a;
//	int b;
//	char* p;
//	int* y;
//	p = &a;
//	y = &b;
//	cin >> p;
//	cin >> y;
//
//





//int main()
//{
//	int p[10];
//	int i = 0;
//
//	int a, b, c, d;
//
//	for (i = 0; i < 5; i++)
//	{
//		cin >> p[i];
//	}
//	for(i = 0; i < 10; i++)
//	{
//		if (p[i] == 0)
//			b = i;
//	}
//	for (a = 0; a < 5; a++)
//	{
//		if (p[a] < p[a + 1])
//		{
//			c = p[a];
//			p[a] = p[a + 1];
//			p[a + 1] = c;
//		}
//	}
//
//	for (i = 0; i >= 5 && i < 10; i++)
//	{
//		cin >> p[i];
//		
//	}
//	for (a = 0; a < 10; a++)
//	{
//		if (p[a] < p[a + 1])
//		{
//			c = p[a];
//			p[a] = p[a + 1];
//			p[a + 1] = c;
//		}
//	}
//
//	cout << p[i];
//}
//int main()
//{
//	int a = 20;
//	int* pai = &a;
//	cout << sizeof(pai);
//}
//
//
//int main()
//{
//	int a[10];
//	int i, j, c;
//	int* m ;
//	int* p = a;
//	
//	for (i = 0; i < 5; i++,p++)
//	{
//		cin >> *p;
//	}
//	for (i = 0,p=  a; i < 5; i++, p++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			m = a + j;
//			if (*p < *m)
//			{
//				c = *p;
//				*p = *m;
//				*m = c;
//			}
//		}
//	}
//	for (i = 0,p=a; i < 5; i++,p++)
//	{
//		cout << *p << "   ";
//	}
//	cout << "\n";
//	for (i = 5; i < 10; i++)
//	{
//		p = a + i;
//		cin >> *p;
//		for (int d = i; d >= 0; d--)
//		{
//			m = a + d - 1;
//			if (*p > *m)
//			{
//				c = *m;
//				*m = *p;
//				*p = c;
//				p--;
//			}
//			else
//				break;
//		}
//	}
//	for (i = 0,p=a; i < 10; i++,p++)
//	{
//		cout << *p;
//	}
//}
//int main()
//{
//	int a[10];
//	int i, j, c;
//	int* m;
//	int* p = a;
//
//	for (i = 0; i < 5; i++, p++)
//	{
//		cin >> *p;
//	}
//	for (i = 0, p = a; i < 5; i++, p++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			m = a + j;
//			if (*p < *m)
//			{
//				c = *p;
//				*p = *m;
//				*m = c;
//			}
//		}
//	}
//	for (i = 0, p = a; i < 5; i++, p++)
//	{
//		cout << *p << "   ";
//	}
//	cout << "\n";
//	for (i = 5; i < 10; i++)
//	{
//		p = a + i;
//		cin >> *p;
//		for (int d = i-1; d >= 0; d--)
//		{
//			m = a + d;
//			if (*p > *m)
//			{
//				c = *m;
//				*m = *p;
//				*p = c;
//				p--;
//			}
//			else
//				break;
//		}
//	}
//	for (i = 0, p = a; i < 10; i++, p++)
//	{
//		cout << *p<<"   ";
//	}
//}
//#include <math.h>
//int main()
//{
//	int n;
//	cout << "请输入点个数\n";
//	cin >> n;
//	float* x = new float[n];
//	float* y = new float[n];
//	int i = 0;
//	float xzong=0, yzong=0;
//	cout << "请输入点的坐标：\n";
//	for (i = 0; i < n; i++)
//	{
//		cin >> x[i];
//		cin >> y[i];
//		xzong += x[i];
//		yzong += y[i];
//		cout << "\n";
//	}
//	cout << "其重心心为" <<"(" <<xzong*1.0/n<<","<<yzong*1.0/n<<")" << "\n";
//	float* distance = new float[n];
//	for (i = 0; i < n; i++)
//	{
//		distance[i] = sqrt((x[i]-xzong*1.0/n)* (x[i] - xzong * 1.0 / n)+(y[i]-yzong *1.0/n)* (y[i] - yzong * 1.0 / n));
//	}
//	float max = distance[0];
//	float min = distance[0];
//	for (i = 0; i < n; i++)
//	{
//		if (distance[i] > distance[0])
//			max = distance[i];
//		if (distance[i] < distance[0])
//			min = distance[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (distance[i] == max)
//		{
//			cout << "距重心最远点为\n" << "("<<x[i]<<","<<y[i]<<")\n";
//		}
//		if (distance[i] == min)
//		{
//			cout << "距重心最近点为\n" << "(" << x[i] << "," << y[i] << ")\n";
//		}
//	}
//	delete[]x;
//	delete[]y;
//	delete[]distance;
//}


//int main()
//{
//    int i, j;
//    int a3x[3][3];
//    int* px = (int*)a3x;
//    cout << "please input 3*3: \n";
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++) {
//            cin >> *px++;
//        }
//    } 
//    px = (int*)a3x;
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++) {
//            cout << *px++ << " ";
//        }
//        cout << "\n";
//    }
//
//   
//}
//int main()
//{
//	char a[256];
//	char b[256] = { 0 };
//	char g[256] = { 0 };
//	gets_s(a);
//	char* p = a;
//	int c = 0;
//	int m, i, j;
//	for (i = 0; i < 256; i++, p++)
//	{
//		if (*p == 0)
//		{
//			m = i;
//			break;
//		}
//		if (*p == '/')
//			c++;
//	}
//	char* y = b;
//	char* x;
//	int d = 0;
//	for (i = 0; i < c + 1; i++)
//	{
//		for (j = 0, y = b; j < m; j++, y++)
//		{
//
//			p = a + d;
//			d++;
//			if (*p == '/')
//			{
//				*y = 0;
//				cout << b << "   /";
//				strcpy(b, g);
//				break;
//			}
//			*y = *p;
//			x = p+1;
//			if (*x == 0)
//			{
//				y++;
//				*y = 0;
//				cout << b << "   /";
//				break;
//			}
//		}
//	}
//	cout << "\b";
//}
//int main()
//{
//	bool a = 0;
//}
//float mymax(float a, float b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//float mymin(float a, float b)
//{
//	if (a > b)
//		return b;
//	else
//		return a;
//}
//int main()
//{
//	float a, b;
//	cin >> a >> b;
//	cout << mymax(a, b) << "\n" << mymin(a, b);
//}
//int njie(int n)
//{
//	int c = 1;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		c = c * i;
//
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout << njie(n);
//}
//bool zhishu(int a)
//{
//	int i;
//	for (i = 2; i < a; i++)
//	{
//		if (a % i == 0)
//			break;
//	}
//	if (i == a)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int a;
//	cin >> a;
//	if (zhishu(a))
//		cout << "是";
//	else
//		cout << "不是";
//}
//bool shifou(double x, double y, double a, double b, double c, double d)
//{
//	double x1 = sqrt((x - a) * (x - a) + (y - b) * (y - b));
//	double x2 = sqrt((x - c) * (x - c) + (y - d) * (y - d));
//	double x3 = sqrt((c - a) * (c - a) + (d - b) * (d - b));
//
//}
//double nci(double x ,int y)
//{
//	int i;
//	double d = 1.0;
//	for (i = 0; i < y; i++)
//	{
//		d = d * x;
//	}
//	return d;
//}
//double jiecheng(double x)
//{
//	double m = 1;
//	for (int i = 1; i <= x; i++)
//	{
//		m = m * i;
//	}
//	return m;
//}
//double mysin(double x)
//{
//	int m;
//	double sin = 0;
//	for (m = 1;; m++)
//	{
//		if (fabs(nci(x, 2 * m - 1) / jiecheng(2 * m - 1)) < 1.e-6)
//		{
//			return sin;
//			break;
//		}
//		sin += nci(x, 2 * m - 1) / jiecheng(2 * m - 1)*nci(-1,m-1);
//		
//	}
//}
//#include<math.h>
//int main()
//{
//	double x;
//	cout << "请输入你想得到的sin对应的x的值：\n";
//	cin >> x;
//	cout <<"我的程序结果为：" << mysin(x)<<"\n";
//	cout << "标准函数值为：" << sin(x)<<"\n";
//}//下一题
//double mymax(double x1, double x2)
//{
//	if (x1 > x2)
//		return x1;
//	else
//		return x2;
//}
//double mymin(double x1, double x2)
//{
//	if (x1 > x2)
//		return x2;
//	else
//		return x1;
//}
//bool gongdian(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
//{
//	if (x1 - x0 == 0 && x2 - x3 != 0)//排除斜率不存在。
//	{
//		if (mymax(x3,x2)>x1 && mymin(x3,x2)<x1)
//			return true;
//		else
//			return false;
//	}
//	if (x1 - x0 != 0 && x2 - x3 == 0)
//	{
//		if (mymax(x0, x1) > x2 && mymin(x1, x0) < x2)
//			return true;
//		else
//			return false;
//	}
//	if (x1 - x0 == 0 && x2 - x3 == 0)
//	{
//		if (x1 == x3)
//			return true;
//		else
//			return false;
//	}
//	else
//	{
//		double k1 = (y1 - y0) * 1.0 / (x1 - x0);
//		double k2 = (y3 - y2) * 1.0 / (x3 - x2);
//		double x = (y0 - y2 + k2 * x2 - k1 * x0) * 1.0 / (k2 - k1);//假设有交点，则对应x的值。
//		if ((x > mymin(x0, x1) && x < mymax(x0, x1))&& (x > mymin(x2, x3) && x < mymax(x2, x3)))//判断点是否在线段内部。
//			return true;
//		else
//			return false;
//	}
//}
//int main()
//{
//	float x0, y0, x1, y1, x2, y2, x3, y3;
//	cout << "请先输入一条线段的两个端点：" << "\n";
//	cin >> x0 >> y0 >> x1 >> y1;
//	cout << "请再输入一条线段的两个端点：" << "\n";
//	cin >> x2 >> y2 >> x3 >> y3;
//	if (gongdian(x0, y0, x1, y1, x2, y2, x3, y3))
//		cout << "有共点";
//	else
//		cout << "没有共点";
//}//下一题
//double mytime(int yue, int day, int shi, int fen, int miao)
//{
//	double sum = 0;
//	int qis;
//	for (qis = 1; qis < yue; qis++)
//	{
//		switch (qis)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			sum += 31 * 24 * 60 * 60;
//			break;
//		case 2:
//			sum += 28 * 24 * 60 * 60;
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			sum += 30 * 24 * 60 * 60;
//			break;
//		default :
//				cout << "输入错误：";
//		}
//	}
//	sum += (day-1) * 24 * 60 * 60;
//	sum += shi * 60 * 60;
//	sum += fen * 60;
//	sum += miao;
//	return sum;
//}
//int main()
//{
//	int yue, day, shi, fen, miao;
//	cout << "请输入月日时分秒，为您输出此时刻为本年度的第几秒：" << "\n";
//	cin >> yue >> day >> shi >> fen >> miao;
//	cout << mytime(yue, day, shi, fen, miao);
//}
//int mysort(int a[], int n)
//{
//	int i,j;
//	int c;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[i] < a[j])
//			{
//				c = a[i];//swap(a[i],a[j])
//				a[i] = a[j];
//				a[j] = c;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int b[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	mysort(b, 10);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		cout << b[i] << "\n";
//	}
//}
//double shuzuqiuhe(int a[], int n)
//{
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[i];
//	}
//	return sum;
//}
//int main()
//{
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	cout << shuzuqiuhe(a, 10);
//}
//double mymax(int a[], int n)
//{
//	double m = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > m)
//		{
//			m = a[i];
//		}
//	}
//	return m;
//}
//double mymin(int a[], int n)
//{
//	double m = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < m)
//		{
//			m = a[i];
//		}
//	}
//	return m;
//}double junzhi(int a[], int n)
//{
//	double jun = 0;
//	for (int i = 0; i < n; i++)
//	{
//		jun += a[i];
//	}
//	return jun / n;
//}
//double zhongzhi(int a[], int n)
//{
//	int i,j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[i] < a[j])
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//	if (n % 2 == 0)
//	{
//		return (a[n / 2] + a[n / 2 - 1]) * 1.0 / 2;
//	}
//	else
//		return a[(n - 1) / 2];
//}
//int main()
//{
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	cout <<zhongzhi(a, 10);
//}
//void fanxiang(char a[])
//{
//	int i = 0,m;
//	for (i = 0;; i++)
//	{
//		if (a[i] == 0)
//		{
//			m = i;
//			break;
//		}
//	}
//	char c;
//	for (i = 0; i < m; i++)
//	{
//		if (i > m - 1 - i)
//			break;
//		c = a[i];
//		a[i] = a[m - 1 - i];
//		a[m-1-i] = c;
//	}
//	return;
//}
//int main()
//{
//	char a[20];
//	gets_s(a);
//	fanxiang(a);
//	cout << a;
//}
//int myzhong(int a[], int n)
//{
//	int mylong = n;
//	int* p = new int[mylong];
//	int* y = new int[mylong];
//	int i,j;
//	for (i = 0;i < mylong;i++)
//	{
//		p[i] = 0;
//		y[i] = a[i];
//	}
//	for (i = 0; i < mylong; i++)
//	{
//		for (j = 0; j < mylong; j++)
//		{
//			if (a[i] == y[j])
//			{
//				p[i]++;
//			}
//		}
//	}
//	int max = p[0];
//	for (i = 0; i < mylong; i++)
//	{
//		if (p[i] > max)
//		{
//			max = p[i];
//		}
//	}
//	for (i = 0; i < mylong; i++)
//	{
//		if (p[i] == max)
//		{
//			delete[]p;
//			delete[]y;
//			return  a[i];
//		}
//	}
//}
//int main()
//{
//	int n;
//	cout << "请输入判断数字个数\n";
//	cin >> n;
//	int* a = new  int[n];
//	int i = 0;
//	cout << "请输入数字，将为你返回一个众数：";
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	cout << myzhong(a, n);
//	delete[]a;
//}//下一题
//bool replace(char* str, const char* str1, const char* str2)
//{
//	size_t  n = strlen(str);
//	size_t n1 = strlen(str1);
//	size_t n2 = strlen(str2);
//	int i,j,m,c;
//	int der = 0;
//	if (n2 > n1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			c = i;
//			for (j = 0; j < n1; j++)
//			{
//				if (str[i] == str1[j])
//					i++;
//				else
//					break;
//			}
//			if (j == n1)
//			{
//				size_t n3 = strlen(str);
//				der++;
//				for (m = n3; m >= c + n1; m--)
//				{
//					str[m + n2 - n1] = str[m];
//				}
//				for (i = c, j = 0; j < n2; i++, j++)
//				{
//					str[i] = str2[j];
//				}
//			}
//			else
//				continue;
//		}
//		if (der > 0)
//			return true;
//		else
//			return false;
//	}
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			c = i;
//			for (j = 0; j < n1; j++)
//			{
//				if (str[i] == str1[j])
//					i++;
//				else
//					break;
//			}
//			if (j == n1)
//			{
//				size_t n3 = strlen(str);
//				der++;
//				for (m=i; m<=n3; m++)
//				{
//					str[m - (n1 - n2)] = str[m];
//				}
//				for (i = c, j = 0; j < n2; i++, j++)
//				{
//					str[i] = str2[j];
//				}
//			}
//			else
//				continue;
//		}
//		if (der > 0)
//			return true;
//		else
//			return false;
//	}
//}
//bool replace(char* str, const char* str1, const char* str2)
//{
//	size_t  n = strlen(str);
//	size_t n1 = strlen(str1);
//	size_t n2 = strlen(str2);
//	int i, j, m, c;
//	int der = 0;
//	if (n2 > n1)
//	{
//		return false;
//	}
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			c = i;
//			for (j = 0; j < n1; j++)
//			{
//				if (str[i] == str1[j])
//					i++;
//				else
//					break;
//			}
//			if (j == n1)
//			{
//				size_t n3 = strlen(str);
//				der++;
//				for (m = i; m <= n3; m++)
//				{
//					str[m - (n1 - n2)] = str[m];
//				}
//				for (i = c, j = 0; j < n2; i++, j++)
//				{
//					str[i] = str2[j];
//				}
//			}
//			else
//				continue;
//		}
//		if (der > 0)
//			return true;
//		else
//			return false;
//	}
//}
//
//int main()
//{
//	char str[256];
//	char str1[256];
//	char str2[256];
//	cout << "请输入一个字符串：\n";
//	gets_s(str);
//	cout << "请输入想替换的字符串：\n";
//	gets_s(str1);
//	cout << "请输入你想要的的字符串：\n";
//	gets_s(str2);
//	if (replace(str, str1, str2))
//		cout << str;
//	else
//		cout << "替换失败或未查找到：";
//}

//
//bool zainei(float x, float y, float rx[], float ry[], int n)
// {
//    bool panduan = false;
//    for (int i = 0, j = n - 1; i < n; j = i++)
//    {
//        if ((ry[i] > y && ry[j] <= y) || (ry[j] > y && ry[i] <= y))
//        {
//            float jiaodian = rx[i] + (x - rx[i]) * (rx[j] - rx[i]) / (ry[j] - ry[i]);
//            if (jiaodian > x)
//            {
//                panduan = !panduan;
//            }
//        }
//    }
//    return panduan;
//}
//int main()
//{
//    int n;
//    cout << "请输入你想判断的几何图形的边数，并按顺或逆时针顺序输入这几个端点：\n";
//    cin >> n;
//    float* rx = new float[n];
//    float* ry = new float[n];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> rx[i] >> ry[i];
//    }
//    float x, y;
//    cout << "请输入想判断的点的坐标：\n";
//    cin >> x >> y;
//    if (zainei(x, y, rx, ry, n))
//    {
//        cout << "在内：";
//    }
//    else
//        cout << "不在内：";
//    delete[]rx;
//    delete[]ry;
//}
//struct jx
//{
//	int l, r, u, d;
//};
//bool zainei(int x, int y, jx a)
//{
//	if (x >= a.l && x <= a.r && y >= a.d && y <= a.u)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//int main()
//{
//	int x, y;
//	cin >> x>>y;
//	jx a;
//	cin >> a.l >> a.r >> a.u >> a.d;
//	if (zainei(x, y, a))
//	{
//		cout << "in";
//	}
//	else
//		cout << "no";
//}
//struct my
//{
//	int y, m, d;
//};
//bool mytime2(my a,my b)
//{
//	if (a.y != b.y)
//		return a.y - b.y;
//	if (a.m != b.m)
//		return a.m - b.m;
//	if (a.d != b.d)
//		return a.d - b.d;
//}
//struct sanwei
//{
//	float x, y, z;
//};
//double distance(sanwei a, sanwei b)
//{
//	double d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z));
//	return d;
//}
//int main()
//{
//	sanwei a, b;
//	cin >> a.x >> a.y >> a.z;
//	cin >> b.x >> b.y >> b.z;
//	cout << distance(a, b);
//}
//struct jx
//{
//	float l, r, u, d;
//};
//double mymax(double a,double b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//double mymin(double a, double b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}
//
//jx myjx(jx a, jx b)
//{
//	jx jiao;
//	if (((a.l >= b.l && a.l <= b.r) || (a.r >= b.l && a.r <= b.r)) && ((a.u >= b.d && a.u <= b.u) || (a.d >= b.d && a.d <= b.u)))
//	{
//		jiao.l = max(a.l, b.l);
//		jiao.r = min(a.r, b.r);
//		jiao.d = max(a.d, b.d);
//		jiao.u = min(a.u, b.u);
//		return jiao;
//	}
//	else
//	{
//		jiao.l = 0;
//		jiao.r = 0;
//		jiao.d = 0;
//		jiao.u = 0;
//		return jiao;
//	}
//}
//int main()
//{
//	jx a, b;
//	cin >> a.l >> a.r >> a.d >> a.u;
//	cin >> b.l >> b.r >> b.d >> b.u;
//	jx jiao = myjx(a, b);
//	cout << jiao.l << jiao.r << jiao.d << jiao.u;
//}
//struct mypot
//{
//	double x, y;
//};
//mypot zuijin(mypot a,mypot m[], int n)
//{
//	int i = 0;
//	double* p = new double[n];
//	for (i = 0; i < n; i++)
//	{
//		p[i] = (m[i].x - a.x) * (m[i].x - a.x) + (m[i].y - a.y) * (m[i].y - a.y);
//	}
//	double min = p[0];
//	for (i = 0; i < n; i++)
//	{
//		if (p[i] < min)
//		{
//			min = p[i];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (p[i] == min)
//		{
//			delete[]p;
//			return m[i];
//		}
//	}
//	mypot a = { 0 };
//	return a;
//}
//int main()
//{
//	mypot a;
//	mypot b[3];
//	cin >> a.x >> a.y;
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> b[i].x >> b[i].y;
//	}
//
//}
//struct dian
//{
//	double x;
//	double y;
//};
//void paixu(dian a[],int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (a[i].x > a[j].x)
//			{
//				swap(a[i], a[j]);
//			}
//			else
//				if (a[i].x == a[j].x)
//				{
//					if (a[i].y > a[j].y)
//					{
//						swap(a[i], a[j]);
//					}
//					else
//						continue;
//				}
//				else
//					continue;
//		}
//	}
//	return;
//}
//int main()
//{
//	int n;
//	cout << "请输入你想排序的点的数量：\n";
//	cin >> n;
//	int i;
//	dian* a = new dian[n];
//	cout << "请输入各点的坐标：\n";
//	for ( i = 0; i < n; i++)
//	{
//		cin >> a[i].x >> a[i].y;
//	}
//	paixu(a, n);
//	for (i = 0; i < n; i++)
//	{
//		cout << a[i].x << "   " << a[i].y << "\n";
//	}
//	delete[]a;
//}
//struct diwu
//{
//	int id;
//	char name[10];
//	int ds;
//	double dianx[100] ;
//	double diany[100] ;
//};
//diwu cha(diwu a[], int n,double x,double y)
//{
//	double* distance = new double[n];
//	int i,j;
//	double sum1, sum2;
//	for (i = 0; i < n; i++)
//	{
//		sum1 = 0;
//		sum2 = 0;
//		for (j = 0; j < a[i].ds; j++)
//		{
//			sum1 += a[i].dianx[j];
//			sum2 += a[i].diany[j];
//		}
//		distance[i] = (sum1 * 1.0 / a[i].ds - x) * (sum1 * 1.0 / a[i].ds - x) +
//			(sum2 * 1.0 / a[i].ds - y) * (sum2 * 1.0 / a[i].ds - y);
//	}
//	double min = distance[0];
//	for (i = 0; i < n; i++)
//	{
//		if (distance[i] < min)
//		{
//			min = distance[i];
//		}
//	}
//	for(i=0;i<n;i++)
//	{
//		if (distance[i] == min)
//			break;
//	}
//	delete[]distance;
//	return a[i];
//}
//int main()
//{
//	int n;
//	cout << "请输入地物数量：\n";
//	cin >> n;
//	diwu* a = new diwu[n];
//	int i;
//	cout << "请依次输入每个地物的id、十字内的有效名称、边际有效点数、每个点的具体坐标\n";
//	for ( i = 0; i < n; i++)
//	{
//		cin >> a[i].id >> a[i].name >> a[i].ds;
//		for (int j = 0; j < a[i].ds; j++)
//		{
//			cin >> a[i].dianx[j] >> a[i].diany[j];
//		}
//		if (i < n - 1)
//		{
//			cout << "请重复上述操作：\n";
//		}
//	}
//	cout << "请输入想要查询的点的坐标：\n";
//	double x, y;
//	cin >> x >> y;
//	diwu c;
//	c = cha(a, n, x, y);
//	cout << "为你输出距离最近的地物的信息,会以id、有效名称、边际有效点数、每个点的具体坐标的形式输出\n";
//	cout << c.id <<"\n" << c.name << "\n";
//	cout << c.ds << "\n";
//	for (i = 0; i < c.ds; i++)
//	{
//		cout << c.dianx[i] << "   " << c.diany[i] << "\n";
//	}
//	delete[]a;
//	return 0;
//}
//struct pt
//{
//	int x, y;
//};
//int main()
//{
//	int n, i;
//	cin >> n;
//	pt a[100];
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i].x >> a[i].y;
//	}
//	FILE* fp = fopen("d:/a.txt", "w");
//	fprintf(fp, "%d\n", n);
//	for (i = 0; i < n; i++)
//	{
//		fprintf(fp, "%d %d\n", a[i].x, a[i].y);
//	}
//	fclose(fp);
//	
//}
//struct PT {
//    float x, y;
//};
//PT GetFar(PT a[], int n) {
//    float cx = 0, cy = 0;
//    int i;
//    for (i = 0; i < n; i++) {
//        cx += a[i].x;
//        cy += a[i].y;
//    }
//    cx /= n;
//    cy /= n;
//    float d0 = (a[0].x - cx) * (a[0].x - cx) + (a[0].y - cy) * (a[0].y - cy);
//    int f = 0;
//    for (i = 0; i < n; i++) {
//        float d = (a[i].x - cx) * (a[i].x - cx) + (a[i].y - cy) * (a[i].y - cy);
//        if (d0 < d) {
//            d0 = d;
//            f = i;
//        }
//    }
//    return a[f];
//}
//int main() {
//    PT a[1000];
//    int n, i;
//    cin >> n;
//    FILE* f;
//    f = fopen("d:/test", "r");
//    fscanf(f, "%d", &n);
//    for (i = 0; i < n; i++)fscanf(f, "%d%d", &a[i].x, &a[i].y);
//    fclose(f);
//    PT t = GetFar(a, n);
//    cout << t.x << " " << t.y;
//}
//bool SplitPN(const char* strpn, char* drv, char* dir, char* name, char* ext)
//{
//	int n = strlen(strpn);
//	int i = 0;
//	int m,c,j;
//	m = 0;
//	c = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (strpn[i] == '/')
//			m++;
//	}
//	for (i = 0; i < n; i++)
//	{
//		drv[i] = strpn[i];
//		if (strpn[i+1] == '/')
//		{
//			drv[i + 1] = 0;
//			i++;
//			break;
//		}
//	}
//	for (i, j = 0; i < n; i++, j++)
//	{
//		dir[j] = strpn[i];
//		if (strpn[i] == '/')
//			c++;
//		if (c == m)
//		{
//			dir[j + 1] = 0;
//			i++;
//			break;
//		}
//	}
//	for (i, j = 0; i < n; i++, j++)
//	{
//		name[j] = strpn[i];
//		if (strpn[i] == '.')
//		{
//			name[j ] = 0;
//			ext[0] = '.';
//			i++;
//			break;
//		}
//	}
//	for (i, j = 1; i < n; i++, j++)
//	{
//		ext[j] = strpn[i];
//		if (strpn[i+1] == 0)
//		{
//			ext[j + 1] = 0;
//			break;
//		}
//	}
//	return true;
//}
//int main()
//{
//	char strpn[256];
//	char drv[256];
//	char dir[256];
//	char name[256];
//	char ext[256];
//	cout << "请输入一个文件的路径，将为您分解：\n";
//	cin >> strpn;
//	/*SplitPN(strpn, drv, dir, name, ext);*/
//	_splitpath(strpn, drv, dir, name, ext);
//	cout << drv << "\n";
//	cout << dir << "\n";
//	cout << name << "\n";
//	cout << ext << "\n";
//}
//int main()
//{
//	FILE* f = fopen("D:/ab.txt", "r");
//	int n = 0;
//	char ca[256];
//	int i;
//	for (i = 0;; i++)
//	{
//		fscanf(f, "%c", &ca[i]);
//		if (ca[i] == 0)
//		{
//			n = i;
//			break;
//		}
//	}
//	int d = 0;
//	int y = 0;
//	for (i = 0; i <n; i++)
//	{
//		if (ca[i] == ' ')
//		{
//			d++;
//		}
//		if (ca[i] == ';')
//		{
//			y++;
//		}
//	}
//	d = d + y;
//	fclose(f);
//	cout << d << "\n";
//	cout << y << "\n";
//}
//struct FPT
//{
//	float x, y;
//};
//FPT zuijin(FPT a[], int n, double x, double y)
//{
//	int i,d;
//	double* distance = new double[n];
//	for (i = 0; i < n; i++)
//	{
//		distance[i] = (a[i].x - x) * (a[i].x - x) + (a[i].y - y) * (a[i].y - y);
//	}
//	double min = distance[0];
//	d = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (distance[i] < min)
//		{
//			min = distance[i];
//			d = i;
//		}
//	}
//	delete[]distance;
//	return a[d];
//}
//int main()
//{
//	FILE* f = fopen("D:/ax.txt", "r");
//	int n, i;
//	fscanf(f, "%d", &n);
//	FPT* h = new FPT[n];
//	for (i = 0; i < n; i++)
//	{
//		fscanf(f, "%f %f", &h[i].x, &h[i].y);
//	}
//	fclose(f);
//	float x, y;
//	cout << "请输入想判断的坐标：\n";
//	cin >> x >> y;
//	FPT m;
//	m = zuijin(h, n, x, y);
//	delete[]h;
//	cout << m.x << "  " << m.y;
// }
//int main()
//{
//	FILE* f = fopen("D:/t.txt", "w");
//	int i,m;
//	m = 32;
//	for (i = 0; i < 126 - 31; i++)
//	{
//		fprintf(f, "%c  ", m);
//		m++;
//	}
//	fclose(f);
//}
//int main()
//{
//	FILE* f = fopen("d:/t.txt", "rb");
//	for (int i = 1; i < 11; i++)
//	{
//		fread(&i, sizeof(int), 1, f);
//		cout << i;
//	}
//	fclose(f);
//}
//struct juxing
//{
//	int l, r, t, b;
//};
//bool gai(juxing a)
//{
//	int x, y;
//	x = rand();
//	y = rand();
//	if ((x > a.l && x < a.r) && (y<a.t && y>a.b))
//	{
//		return true;
//	}
//	else
//		return false;
//}
//int main()
//{
//	juxing a;
//	a.l = 0;
//	a.r =100 ;
//	a.b = 0;
//	a.t = 100;
//	srand(time(0));
//	float c = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (gai(a))
//		{
//			c++;
//		}
//	}
//	cout << c/100;
//}
struct dian
{
	char a[10];
	float x, y, z;
};
//int main()
//{
//	int n,i;
//	cout << "请输入点数：\n";
//	cin >> n;
//	dian* p = new dian[n];
//	for (i = 0; i < n; i++)
//	{
//		cin >> p[i].a >> p[i].x >> p[i].y >> p[i].z;
//	}
//	FILE* f = fopen("D:/t.txt", "w");
//	fprintf(f, "%d\n", n);
//	for (i = 0; i < n; i++)
//	{
//		fprintf(f, "%s  %f %f %f\n", p[i].a, p[i].x, p[i].y, p[i].z);
//	}
//	fclose(f);
//	delete[]p;
//}
//dian a(dian p[], int n, float x, float y)
//{
//	int i;
//	float* d = new float[n];
//	for (i = 0; i < n; i++)
//	{
//		d[i] = (p[i].x - x) * (p[i].x - x) + (p[i].y - y) * (p[i].y - y);
//	}
//	float min = d[0];
//	int h = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (d[i] < min)
//		{
//			min = d[i];
//			h = i;
//		}
//	}
//	delete[]d;
//	return p[h];
//}
//int main()
//{
//	FILE* f = fopen("d:/t.txt", "r");
//	int n,i;
//	fscanf(f, "%d",&n);
//	dian* p = new dian[n];
//	for (i = 0; i < n; i++)
//	{
//		fscanf(f, "%s%f%f%f", &p[i].a, &p[i].x,&p[i].y,&p[i].z);
//	}
//	float x, y;
//	cin >> x >> y;
//	dian m = a(p, n, x, y);
//	cout << m.x <<"  " << m.y;
//	delete[]p;
//	fclose(f);  
//}
//#include <iostream>
//using namespace std;
//struct STU {
//	char name[100];
//	long long ID;
//	double height;
//};
//void heightsort(STU stu[], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (stu[i].height > stu[j].height) {
//				STU temp = stu[i];
//				stu[i] = stu[j];
//				stu[j] = temp;
//			}
//		}
//	}
//}
//STU findif(STU stu[], int n, char* name0) {
//	for (int i = 0; i < n; i++) {
//		if (strcmp(stu[i].name, name0) == 0) {
//			return stu[i];
//		}
//	}
//	STU notfound = { "not found",-1,-1.0 };
//	return notfound;
//}
//int main()
//{
//	int n;
//	FILE* p;
//	p = fopen("D:/t.txt", "r");
//	if (p == nullptr) {
//		cout << "无法打开文件！" << endl;
//		return 1;
//	}
//	fscanf(p, "%d", &n);
//	cout << "n=" << n << endl;
//	STU* students = new STU[n];
//	for (int i = 0; i < n; i++) {
//		fscanf(p, "%s%lld%lf", students[i].name, &students[i].ID, &students[i].height);
//	}
//	fclose(p);
//	heightsort(students, n);
//	for (int i = 0; i < n; i++) {
//		cout << students[i].name << " " << students[i].ID << " " << students[i].height << endl;
//	}
//	char queryname[200];
//	cout << "enter the name:";
//	cin >> queryname;
//	STU student = findif(students, n, queryname);
//	cout << "Found student: " << student.name << " " << student.ID << " " << student.height << endl;
//	delete[]students;
//}
struct pe
{
	char name[10];
	long long a;
	float high;
};
void paixu(pe stu[], int n)
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (stu[i].high < stu[j].high)
			{
				swap(stu[i], stu[j]);
			}
		}
	}
	return;
}
pe cha(pe stu[], int n, char* nameme)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (strcmp(stu[i].name, nameme) == 0)
			break;
	}
	return stu[i];
}
int main()
{
	FILE* f = fopen("D:/t.txt", "r");
	int n,i;
	fscanf(f, "%d", &n);
	pe* stu = new pe[n];
	for (i = 0; i < n; i++)
	{
		fscanf(f, "%s%lld%f", &stu[i].name, &stu[i].a, &stu[i].high);
	}
	paixu(stu, n);
	for (i = 0; i < n; i++)
	{
		cout << stu[i].name << "  " << stu[i].a << "   " << stu[i].high << "\n";
	}
	char nameme[10];
	cout << "请输入你的名字:";
	cin >> nameme;
	pe m = cha(stu, n, nameme);
	cout << m.name <<"  " << m.a <<"  " << m.high << "\n";
	delete[]stu;
	fclose(f);
}












// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
