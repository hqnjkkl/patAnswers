//
//  pat1044eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-12.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1044eng.h"

//4:39->4:47coding ->5:35 finished
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//#define MAX 100003
//
//struct Pair
//{
//	int s;
//	int e;
//};
//vector<int> que;
//vector<Pair> res2;
//Pair res[MAX];
//int chain[MAX];
//int ri = 0;
//
//int main()
//{
//	int n,m;
//	int i,j,k,s,e,sum,tmp;
//	bool ans = false;
//	int minSub = 999999999;
//	Pair min;
//	scanf("%d%d",&n,&m);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&chain[i]);
//	}
//	k = 0;
//	sum = 0;
//	for(i=1;i<=n;i++)
//	{
//		que.push_back(i);
//		sum +=chain[i-1];
//        if(sum>=m)
//        {
//			while(true)
//			{
//                if(que.size()==0 || sum <m)
//                {
//                    break;
//                }
//                if(!ans)
//                {
//                    if(sum-m<=minSub)
//                    {
//                        Pair pt;
//                        pt.s = que[0];
//                        pt.e = i;
//                        if(sum-m<minSub)
//                        {
//                            if(res2.size()>0)
//                            {
//                                res2.clear();
//                            }
//                            minSub = sum-m;
//                        }
//                        res2.push_back(pt);
//                    }
//                }
//                if(sum==m)
//                {
//                    res[k].s = que[0];
//                    res[k].e = i;
//                    k++;
//                    ans = true;
//                }
//				j = que[0];
//				que.erase(que.begin());
//				sum -= chain[j-1];
//                }
//            }
//	}
//	if(ans)
//	{
//		for(i=0;i<k;i++)
//		{
//			printf("%d-%d\n",res[i].s,res[i].e);
//		}
//	}else
//	{
//		for(i=0;i<res2.size();i++)
//		{
//			printf("%d-%d\n",res2[i].s,res2[i].e);
//		}
//	}
//	return 0;
//}
