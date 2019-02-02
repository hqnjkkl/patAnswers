//
//  pat1042eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-12.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1042eng.h"
//#include <stdio.h>
//#define LEN 54
//int first[LEN];
//int next[LEN];
//int ma[LEN];
//int main()
//{
//	int i,j,n;
//	scanf("%d",&n);
//	for(i=1;i<=LEN;i++)
//	{
//		scanf("%d",&ma[i]);
//		first[i] = i;
//	}
//	for(i=0;i<n;i++)
//	{
//		for(j=1;j<=LEN;j++)
//		{
//			next[ma[j]] = first[j];
//		}
//		for(j=1;j<=LEN;j++)
//		{
//			first[j]= next[j];
//		}
//	}
//	for(i=1;i<=LEN;i++)
//	{
//		if(next[i]>=1&&next[i]<=13)
//		{
//			printf("S%d",next[i]);
//		}else if(next[i]>=14&&next[i]<=26)
//		{
//			printf("H%d",next[i]-13);
//		}else if(next[i]>=27&&next[i]<=39)
//		{
//			printf("C%d",next[i]-26);
//		}else if(next[i]>=40&&next[i]<=52)
//		{
//			printf("D%d",next[i]-39);
//		}else
//		{
//			printf("J%d",next[i]-52);
//		}
//		if(i!=LEN)
//            printf(" ");
//	}
//	printf("\n");
//	return 0;
//}
