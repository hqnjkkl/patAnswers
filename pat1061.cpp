//
//  pat1061.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-21.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

//#include "pat1061.h"

pat 1060还需要重新写一遍
#include <stdio.h>
#include <string.h>

char code[4][63];
int main()
{
	int i,j,n,m,min;
	for(i=0;i<4;i++)
	{
		scanf("%s",code[i]);
	}
	m = strlen(code[0]);
	n = strlen(code[1]);
	min = m<n?m:n;
	int flag = 0;
	for(i=0;i<min;i++)
	{
		if(flag==0)
		{
			if(code[0][i]>='A' && code[0][i]<='G')
               if(code[0][i]==code[1][i])
               {
                   switch(code[0][i])
                   {
                       case 'A':
                           printf("MON ");
                           break;
                       case 'B':
                           printf("TUE ");
                           break;
                       case 'C':
                           printf("WED ");
                           break;
                       case 'D':
                           printf("THU ");
                           break;
                       case 'E':
                           printf("FRI ");  // fri spell wrong
                           break;
                       case 'F':
                           printf("SAT ");
                           break;
                       case 'G':
                           printf("SUN ");
                           break;
                   }
                   flag = 1;
               }
		}else
		{
			if(code[0][i]==code[1][i])
			{
				if(code[0][i]>='0'&&code[0][i]<='9')
				{
					printf("0%d:",code[0][i]-'0');
					break;
				}else if(code[0][i]>='A'&&code[0][i]<='N')
				{
					printf("%d:",code[0][i]-'A'+10);
					break;
				}	
			}
			
		}
	}
	m = strlen(code[2]);
	n = strlen(code[3]);
	min = m<n?m:n;
	for(i=0;i<min;i++)
	{
		if(code[2][i]==code[3][i])
           {
            if(code[2][i]>='a'&&code[2][i]<='z' ||
            code[2][i]>='A'&& code[2][i]<='Z')
             {
                              printf("%02d\n",i);
                              break;
              }
               }
           }
                              return 0;
                              }
