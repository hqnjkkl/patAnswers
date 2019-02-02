//
//  pat1047eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-13.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1047eng.h"

//11:55 reading->11:59->coding
/**
 *./source.cc:20:17: error: 'Course cos [2503]' redeclared as different kind of symbol
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h:64:1: error: previous declaration of 'double cos(double)'
 * 表示之前又重定义的cos 或者Course,看后面是cos重复了。
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAX 100

struct Name
{
	char na[5];
};

struct Course
{
	vector<Name> stus;
};

Course coss[2503];

bool cmp(const Name &th,const Name &that)
{
	int res = strcmp(th.na,that.na);
	if(res<0)
		return true;
	else
		return false;
}
int main()
{
	int n,k,i,j,m;
	int cou;
	char name[5];
	scanf("%d%d",&n,&k);
	Name nac;
	for(i=0;i<n;i++)
	{
		scanf("%s",nac.na);
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&cou);
			coss[cou].stus.push_back(nac);
		}
	}
   // place k in the wrong place
	for(i=1;i<=k;i++)
	{
		sort(coss[i].stus.begin(),coss[i].stus.end(),cmp);
	}
	for(i=1;i<=k;i++)
	{
		int size = coss[i].stus.size();
		printf("%d %d\n",i,size);
		for(j=0;j<size;j++)
		{
			printf("%s\n",coss[i].stus[j].na);
		}
	}
	return 0;
}
