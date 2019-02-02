//
//  pat1082eng.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-7-26.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "pat1082eng.h"

int num[13];
char cn[13];

void printfNum(int n)
{
   if(n==1)
   {
       printf("yi");
   }else if(n==2)
   {
       printf("er");
   }else if(n==3){
       printf("san");
   }else if(n==4){
       printf("si");
   }else if(n==5){
       printf("wu");
   }else if(n==6){
       printf("liu");
   }else if(n==7){
       printf("qi");
   }else if(n==8){
       printf("ba");
   }else if(n==9){
       printf("jiu");
   }
}

void printfP(int n)
{
   if(n==3){
       printf("Qian");
   }else if(n==2){
       printf("Bai");
   }else if(n==1){
       printf("Shi");
   }
}
int main()
{
   scanf("%s",cn);
   int len1 = strlen(cn),i=0,j=0,tmp;
   int positive = 1;
   if(cn[0]=='-')
   {
       positive = 0;
       printf("Fu ");
       for(i=0;i<len1;i++){
           cn[i] = cn[i+1];
       }
       len1--;
   }
   for(i=0;i<len1;i++)
   {
       num[i] = cn[i]-'0';
   }
   
   i = 0;
   j = len1-1;
   while(i<j)
   {
       tmp = num[i];
       num[i] = num[j];
       num[j] = tmp;
       i++;
       j--;
   }
   int isZero = 0;
   for(i=len1-1;i>=0;i--)
   {
       if(i==7)
       {
           printfNum(i+1);
           printf(" Yi");
       }else if(i<=6 && i>=3){
           if(num[i]==0)
           {
               
               isZero = 1;
           }else{
               if(i!=6 && isZero==1)
               {
                   printf(" ling ");
                   isZero = 0;
               }
               printfNum(i+1);
               printf(" ");
               printfP(i-3);
               printf(" ");
           }
           if(i==3&&isZero==0){
               printfP(" Wan");
           }
       }
   }
   return 0;
}

