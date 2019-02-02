//
//  pat1049eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-13.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1049eng.h"

//8:53->reading->8:57 thinking-> 9:31-> coding 思维真慢
//关键点在9999上
#include <stdio.h>

//int no[13];
//int pow[10];//10,100,200
//void getPow()
//{
//	int p = 10;
//    int i = 0;
//	for(i=1;i<10;i++)
//	{
//		pow[i] = p;
//		p*=10;
//	}
//    return ;
//}
//
//
//int getOnes(int n)
//{
//	int tmp1 = 0;
//	if(n<1)
//	{
//		return 0;
//	}else if(n>=1&&n<=9)
//	{
//		return 1;
//	}else if(n>=10&&n<=19)
//	{
//		return n%10+1+getOnes(n%10)+1;
//	}else if(n>=20&&n<=99)
//	{
//		tmp1 = n%10;
//		n = n-tmp1;
//		return getOnes(19)+getOnes(tmp1)+(n-20)/10;
//	}
//}
//
//int getbits(int n)
//{
//	if(n==0)
//		return 0;
//	int res = 0;
//	while(n>0)
//	{
//		n/=10;
//		res++;
//	}
//	return res;
//}
//
//int getResult(int n)
//{
//	int bits = getbits(n);
//	if(bits<3)
//	{
//		return getOnes(n);
//	}
//	int tmp;
//	int sum;
//	if(n>=2*pow[bits-1])
//	{
//		tmp = n%pow[bits-1];
//		n-=tmp;
//        int sum1 = getResult(2*pow[bits-1]-1);
//        int sum2 = getResult(tmp);
//        int sum3 = getResult(pow[bits-1]-1)*((n-(2*pow[bits-1]))/pow[bits-1]);
//		sum = sum1+sum2+sum3;
//		return sum;
//	}else
//	{
//        int sum1 = n%(pow[bits-1]);//多少个1
//        int sum2 = getResult(n%pow[bits-1]);// except the highest bit
//        int sum3 = getResult(pow[bits-1]-1)+1;// the 9999
//		sum = sum1+sum2+sum3;
//		return sum;
//	}
//}
//
//int main()
//{
//	int n;
//    getPow();
//	while(scanf("%d",&n)!=EOF){
//        printf("%d\n",getResult(n));
//    }
//	return 0;
//}
