//
//  pat1062.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-21.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1062.h"

//7:43 reading->7:52 coding -> 8:16 finish
//#include <stdio.h>
//#include <stdlib.h>
//struct People
//{
//    int id;
//    int virtue;
//    int talent;
//    int level;//0 sages,1 noblemen,2 fool men,3 small men,4 no ranks
//};
//int cmp(const void *a,const void *b)
//{
//    People x = *((People *)a);
//    People y = *((People *)b);
//    if(x.level!=y.level)
//    {
//        return x.level - y.level;
//    }else
//    {
//        int grades = (y.talent+y.virtue)-(x.talent + x.virtue);
//        if(grades!=0)
//        {
//            return grades;
//        }else
//        {
//            int vir = x.virtue - y.virtue;
//            if(vir!=0)
//            {
//                return -vir;
//            }else
//            {
//                return x.id - y.id;
//            }
//        }
//    }
//}
//People peos[100003];
//
//int main()
//{
//    int n,l,h,i,j,k;
//    scanf("%d%d%d",&n,&l,&h);
//    int count = 0;
//    for (i=0; i<n;i++) {
//        scanf("%d%d%d",&peos[i].id,&peos[i].virtue,&peos[i].talent);
//        if(peos[i].virtue <l || peos[i].talent<l)
//        {
//            peos[i].level = 4;
//            count ++;
//        }else if(peos[i].virtue>=h&&peos[i].talent>=h)
//        {
//            peos[i].level = 0;
//        }else if(peos[i].talent<h && peos[i].virtue>=h)
//        {
//            peos[i].level = 1;
//        }else if(peos[i].virtue<h && peos[i].talent<h &&peos[i].virtue>=peos[i].talent)
//        {
//            peos[i].level = 2;
//        }else
//        {
//            peos[i].level = 3;
//        }
//    }
//    qsort(&peos[0],n,sizeof(People),cmp);
//    int res = n-count;
//    printf("%d\n",res);
//    for(i=0;i<res;i++)
//    {
//        printf("%08d %d %d\n",peos[i].id,peos[i].virtue,peos[i].talent);
//    }
//    return 0;
//}
//
