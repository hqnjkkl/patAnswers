//
//  hiho3.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-26.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

//#include "hiho3.h"
//
//#include <stdio.h>
//
//int main()
//{
//    char *p1 = "hello";
//    char p2[] = "hello";
//   // p1[0] = 'i';
//    p2[0] = 'j';
//    printf("%s",p2);
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <vector>
//
//using namespace std;
//
//char ori[1000003],mo[10003];
//
//vector<int> getMyNext(char *a,int len)
//{
//    int i=0,j=-1;
//    vector<int> next(1,-1);
//    while(i<len)
//    {
//        if(j==-1 || a[i]==a[j])
//        {
//            i++;
//            j++;
//            next.push_back(j);
//        }else
//        {
//            j = next[j];
//        }
//    }
//    
//    return next;
//    
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int count = 0;
//    while(n>0)
//    {
//        n--;
//        //  scanf("%s",mo);
//        // scanf("%s",ori);
//        gets(mo);
//        gets(ori);
//        int len1 = strlen(ori);
//        int len2 = strlen(mo);
//        
//       vector<int> next =  getMyNext(mo, len2);
//        count = 0;
//        int j = 0,i=0;
//        if(len1==0 || len2==0){
//            printf("0\n");
//            continue;
//        }
//        while(true)
//        {
//        while(i<len1 && j<len2)
//        {
//            if(j==-1 || ori[i]==mo[j])
//            {
//                i++;
//                j++;
//            }else
//            {
//                j = next[j];
//            }
//        }
//            if(j==len2)
//            {
//                count++;
//                j = 0;
//                i = i-len2+1;
//            }
//            if(i==len1)
//                break;
//        }
//        printf("%d\n",count);
//    }
//    return 0;
//}
//
