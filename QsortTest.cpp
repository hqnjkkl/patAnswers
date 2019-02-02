//
//  QsortTest.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-9-30.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//
//
#include "QsortTest.h"

#include <stdio.h>
#include <stdlib.h>

using namespace std;

void qsort(int arr[],int s,int e);
int partition(int arr[],int s,int e);

void heapAdjust(int arr[],int s,int e);
void heapSort(int arr[],int s,int e);

int arr[] = {4,5,6,1,2,3,4,6,36,77,-1,0};
int main()
{
   //qsort(arr,0,11);
   heapSort(arr, 0, 11);
   for(int i=0;i<12;i++)
   {
       printf("%d,",arr[i]);
   }
   return 0;
}

//heapSort
void heapAdjust(int arr[],int s,int e)
{
   int tmp = arr[s];
   for(int i= s*2+1;i<=e;i = s*2+1)
   {
       if(i<e && arr[i]<arr[i+1])
       {
           i++;
       }
       if(tmp>=arr[i])
       {
           break;
       }
       arr[s] = arr[i];
       s = i;
   }
   arr[s] = tmp;
   return ;
}

void heapSort(int arr[],int s,int e)
{
   for(int i=(s+e)/2;i>=0;i--)
   {
       heapAdjust(arr, i, e);
   }
   
   for(int i=s;i<(e-s);i++)
   {
       int tmp = arr[e-i];
       arr[e-i] = arr[s];
       arr[s] = tmp;
       heapAdjust(arr,s,e-i-1);
   }
   return ;
}
//12:26 ->12:28
void qsort(int arr[],int s,int e)
{
   if(s<e)
   {
       int p = partition(arr,s,e);
       qsort(arr,s,p-1);
       qsort(arr,p+1,e);
   }
}

int partition(int arr[],int s,int e)
{
   int tmp = arr[s];
   while(s<e)
   {
       while(s<e && arr[e]>=tmp)
       {
           e--;
       }
       arr[s] = arr[e];
       while(s<e && arr[s]<=tmp)
       {
           s++;
       }
       arr[e] = arr[s];
   }
   arr[s] = tmp;
   return s;
}

