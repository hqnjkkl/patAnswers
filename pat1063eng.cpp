//
//  pat1063eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-21.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//
#include "pat1063eng.h"
#include <stdio.h>
#include <set>
#include <vector>

using namespace std;
//vector<set<int> > nums;
//double getCommon(set<int> &a,set<int> &b);
//
//int main()
//{
//    int n,m,i,j,k,x,y;
//    double res;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&m);
//        set<int> tmp;
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&x);
//            tmp.insert(x);
//        }
//        nums.push_back(tmp);
//    }
//    scanf("%d",&k);
//    for(i=0;i<k;i++)
//    {
//        scanf("%d%d",&x,&y);
//       res = 100*getCommon(nums[x-1],nums[y-1]);
//        printf("%.1lf%%\n",res);
//    }
//    return 0;
//}
//
//double getCommon(set<int> &a,set<int> &b)
//{
//    double per=0.0;
//    int i,j,tmp;
//    int coms = 0,total = 0;
//    set<int>::iterator ita = a.begin();
//    set<int>::iterator itb = b.begin();
//    for(;ita!=a.end() && itb!=b.end();)
//    {
//        if(*(ita) == *(itb))
//        {
//            ita++;
//            itb++;
//            coms ++;
//        }else if(*(ita)<*(itb))
//        {
//            ita++;
//        }else{
//            itb++;
//        }
//    }
//    per = (double)coms/(a.size()+b.size()-coms);
//    return per;
//}
