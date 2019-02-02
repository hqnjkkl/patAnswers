//
//  pat1043eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-12.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1043eng.h"

先序求后序，判断是否是bst或者其mirror
#include <stdio.h>
#define MAX 1003
int tree[MAX];

int isBST(int *t,int s,int e);
int isMirror(int *t,int s,int e);
void postOrder(int *t, int b,int s,int e,int l);

int main()
{
	int n,i,j,mi=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&tree[i]);
	}
	int bst =0;
	bst = isBST(tree,0,n-1);
	if(!bst)
	{
		mi = isMirror(tree,0,n-1);
	}
	if(bst || mi)
	{
       printf("YES\n");
       if(bst)
       {
           postOrder(tree, 1, 0, n-1, 1);
       }else
       {
           postOrder(tree, 0, 0, n-1, 1);
       }
       return 0;
	}
	printf("No\n");
	return 0;
}

void postOrder(int *t, int b,int s,int e,int l)
{
	int i,j,root;
	if(s>=e)
	{
		if(s==e)
		{
			printf("%d",t[s]);
			if(l!=1)
			{
				printf(" ");
			}
		}
		return;
	}
	
	root = t[s];
	if(b)
	{
		for(i=s+1;i<=e;i++)
		{
			if(t[i]>=root)
			{
				break;
			}
		}
		postOrder(t,b,s+1,i-1,l+1);
		postOrder(t,b,i,e,l+1);
	}else
	{
		for(i=s+1;i<=e;i++)
		{
			if(t[i]<root)
			{
				break;
			}
		}
		postOrder(t,b,s+1,i-1,l+1);
		postOrder(t,b,i,e,l+1);
	}
	printf("%d",t[s]);
	if(l!=1)
	{
		printf(" ");
	}
	return ;
}

//0 is false, 1 is true
int isBST(int *t,int s,int e)
{
	if(s>=e)
		return 1;
	int root = t[s];
	int i=0,j=0;
	for(i=s+1;i<=e;i++)
	{
		if(t[i]>=root)
		{
			break;
		}
	}
	
	//都比根小
	if(i==e+1)
	{
		return isBST(t,s+1,e);
	}else
	{
		for(j=i;j<=e;j++)
		{
			if(t[j]<root)
			{
				return 0;
			}
		}
		int left = isBST(t,s+1,i-1);
		if(left==0)
			return 0;
		return isBST(t,i,e);
	}
}

//0 is false, 1 is true
int isMirror(int *t,int s,int e)
{
	if(s>=e)
		return 1;
	int root = t[s];
	int i=0,j=0;
	for(i=s+1;i<=e;i++)
	{
		if(t[i]<root)
		{
			break;
		}
	}
	
	//都比根小
	if(i==e+1)
	{
		return isBST(t,s+1,e);
	}else
	{
		for(j=i;j<=e;j++)
		{
			if(t[j]>=root)
			{
				return 0;
			}
		}
		int left = isMirror(t,s+1,i-1);
		if(left==0)
			return 0;
		return isMirror(t,i,e);
	}
}

