////
////  pat1086.cpp
////  acmProject
////
////  Created by HuQiaoNan on 14-9-6.
////  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
////
//
////#include "pat1086.h"
//
//#include <stdio.h>
//
//struct Node
//{
//    int val;
//    Node *left;
//    Node *right;
//    Node(int v):val(v),left(NULL),right(NULL){}
//    Node(){}
//};
//char input[8];
//int n=0,ids=0,ids2=0;
//Node * buildTree()
//{
//    Node * r=NULL;
//    int tmp=0;
//    if(ids<2*n)
//    {
//        scanf("%s",input);
//        if(input[1]=='u')
//        {
//            scanf("%d",&tmp);
//            r = new Node(tmp);
//            ids++;
//        }else if(input[1]=='o')
//        {
//            ids++;
//            return NULL;
//        }
//       r->left = buildTree();
//        r->right = buildTree();
//    }
//    return r;
//}
//void postorder(Node *r)
//{
//    if(r!=NULL)
//    {
//        postorder(r->left);
//        postorder(r->right);
//        printf("%d",r->val);
//        ids2++;
//        if(ids2<n){
//            printf(" ");
//        }else
//        {
//            printf("\n");
//        }
//    }
//}
//int main()
//{
//    scanf("%d",&n);
//    Node * root = buildTree();
//    postorder(root);
//    return 0;
//}
//
