//
//  pat1040eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-11.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1040eng.h"

//#include <stdio.h>
//#include <string.h>
//
//#define LEN 1003
//int dp[LEN][LEN];
//char s[LEN];
//int main()
//{
//	gets(s);
//	int len = strlen(s);
//	int i,j,k;
//	int max = 0;
//	for(i=0;i<LEN;i++)
//	{
//		for(j=0;j<LEN;j++)
//		{
//			dp[i][j] = 0;
//		}
//	}
//	for(i=0;i<len;i++)
//	{
//		dp[i][i] = 1;
//		if(1>max)
//		{
//			max = i;
//		}
//		if(i+1<len && s[i]==s[i+1])
//		{
//			dp[i][i+1] = 1;
//			max = 2;
//		}
//	}
//	for(i=2;i<len;i++)
//	{
//		for(j=0;j+i<len;j++)
//		{
//			if(s[j]==s[j+i]&& dp[j+1][j+i-1])
//			{
//				dp[j][j+i] = 1;
//				if(i+1>max)
//				{
//					max = i+1;
//				}
//			}
//		}
//	}
//	printf("%d\n",max);
//	return 0;
//}
