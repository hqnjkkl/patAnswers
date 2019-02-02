//
//  pat1046eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-13.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1046eng.h"

11:04 ->11:10 thinking-> tle? ->11:33 modify->11:43 modify continue-> 11:52 finished,一定要看清楚题目啊！！！！
#include<stdio.h>
int num[100003];

int main()
{
	int n,m,i,j,f,s;
	int tmp,sum1,sum2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&f,&s);
		if(f==s)
		{
			printf("0\n");
			continue;
		}
		sum1 = 0;
       j = f;
       while(j!=s)
       {
           sum1+=num[j];
           j = (j+1)%(n+1);
           if(j==0)
           {
               j++;
           }
       }
		sum2 = 0;
		j = s;
       while (j!=f) {
           sum2 += num[j];
           j = (j+1)%(n+1);
           if(j==0)
           {
               j++;
           }
       }
		if(sum1>sum2)
		{
			printf("%d\n",sum2);
		}else
		{
			printf("%d\n",sum1);
		}
	}
	return 0;
}
