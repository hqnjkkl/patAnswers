//
//  pat1076eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-24.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1076eng.h"

08:27 reading->08:41 thinking and coding
#include <stdio.h>
#include <queue>
#define MAX 99999999
using namespace std;

int graph[1003][1003];
int visit[1003];

int countForwards(int n,int u,int level);
int main()
{
	int n,l,k;
	int i,j,m,u;
  // memset(graph, MAX, <#size_t#>);
	memset(graph,MAX,1003*1003*sizeof(int));
	scanf("%d%d",&n,&l);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&u);
			graph[i][u] = 0; // i follow u
		}
	}
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&u);
		printf("%d\n",countForwards(n,u,l));
	}
	return 0;
}
int countForwards(int n,int u,int level)
{
   int i,j;
	for(i=1;i<=n;i++)
	{
		visit[i] = 0;
	}
	int cur = u,size = 1,t = 0,res = 0;
	queue<int> que;
   que.push(cur);
	visit[cur] = 1;
	while(true)
	{
		for(i=0;i<size;i++)
		{
			cur = que.front();
			que.pop();
			for(j=1;j<=n;j++)
			{
				if(!visit[j]&&(graph[j][cur]==0))
				{
					visit[j] = 1;
					que.push(j);
					res++;
				}
			}
		}
		size = que.size();
		t++;
		if(t==level ||size==0)
		{
			break;
		}
	}
	return res;
}
