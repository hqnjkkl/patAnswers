//
//  pat1085eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-9-6.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1085eng.h"

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long> nums;
int bSearch(long long num,int n)
{
   int l = 0,r = n-1,mid;
   while(l<=r)
   {
       mid = (l+r)/2;
       if(nums[mid]>num)
       {
           r = mid-1;
       }else if(nums[mid]<num)
       {
           l = mid+1;
       }else
       {
           return mid;
       }
   }
   return l;
}
int main()
{
   long long n,p,tmp1,m,index;
   long long i,j,tmpMax=0,resMax;
   scanf("%lld%lld",&n,&p);
   for(i=0;i<n;i++)
   {
       scanf("%lld",&tmp1);
       nums.push_back(tmp1);
   }
   sort(nums.begin(),nums.end());
   for(i=0;i<n;i++)
   {
       m = nums[i]*p;
       index = bSearch(m, n);
       if(nums[n-1]<=m)
       {
           tmpMax = n-1-i+1;
       }else
       {
           tmpMax = index-i;
       }
       if(tmpMax>resMax)
       {
           resMax = tmpMax;
       }
   }
   printf("%lld\n",resMax);
   return 0;
}

