//
//  pat1045eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-12.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1045eng.h"
6:52->7:00 thinking-> prepare coding->7:06->finish coding 7:15 ->7:16 pass
动态规划，分多的不一定是难题
#include <stdio.h>

int dp[203][10003];
int fav[203];
int stripe[10003];
int main()
{
	int n,m,f,i,j;
	int large;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&fav[i]);
                       }
                       scanf("%d",&f);
                       for(i=0;i<f;i++)
                       {
                       scanf("%d",&stripe[i]);
                                          }
                                          for(i=1;i<=m;i++)
                                          {
                                          for(j=1;j<=f;j++)
                                          {
                                          large = dp[i-1][j-1]>dp[i-1][j]?dp[i-1][j-1]:dp[i-1][j];
                                          large = large>dp[i][j-1]?large:dp[i][j-1];
                                          if(fav[i-1]==stripe[j-1])
                                          {
                                          dp[i][j] = large+1;
                                          }else
                                          {
                                          dp[i][j] = large;
                                          }
                                          }
                                          }
                                          printf("%d\n",dp[m][f]);
                                          return 0;
                                          }
