//
//  pat1064eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-21.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1064eng.h"
//9:41 coding->10:33 finish 思考也要十几分钟，所以这种题目要多做，要把其中数字的关系掌握清楚

//#include <stdio.h>
//#include <stdlib.h>
//#include <vector>
//using namespace std;
//
//struct Node{
//    int val;
//    struct Node *left;
//    struct Node *right;
//    Node(){}
//    Node(int v): val(v),left(NULL),right(NULL){}
//    
//};
//struct Node * createTree(int *a,int len);
//int nums[1003];
//vector<Node *> sta;
//int cmp(const void *a,const void *b)
//{
//    int x = *((int *)a);
//    int y = *((int *)b);
//    return x-y;
//    
//}
//int main()
//{
//    int n,i;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&nums[i]);
//    }
//    qsort(&nums[0],n,sizeof(int),cmp);
//    Node *root = createTree(nums,n);
//    sta.push_back(root);
//    int m = sta.size();
//    while(sta.size()>0)
//    {
//        for(i=0;i<m;i++)
//        {
//            Node *t = sta[0];
//            printf("%d",t->val);
//            if(i!=m-1)
//            {
//                printf(" ");
//            }
//            if(t->left!=NULL){
//                sta.push_back(t->left);
//            }
//            if(t->right!=NULL){
//                sta.push_back(t->right);
//            }
//            sta.erase(sta.begin());
//        }
//        m = sta.size();
//        if(m!=0)
//        {
//            printf(" ");
//        }
//    }
//    return 0;
//}
//
//struct Node * createTree(int *a,int len)
//{
//    if(len==1)
//    {
//        return new Node(a[0]);
//    }else if(len==0)
//        return NULL;
//    int i,p,l,tmp,res;
//    l = 1;
//    for(i=1;i<12;i++)
//    {
//        tmp = l*2-1;
//        l*=2;
//        if(tmp>len)
//        {
//            break;
//        }
//    }
//    p = len - (l/2-1);
//    if(p>=l/4)
//    {
//        res = (l/2-1)/2 +l/4;
//    }else
//    {
//        res = (l/2-1)/2 + p;
//    }
//    Node *r = new Node(a[res]);
//    r->left = createTree(a, res);
//    r->right = createTree(a+res+1,len-res-1);
//    return r;
//}
