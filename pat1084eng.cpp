////
////  pat1084eng.cpp
////  acmProject
////
////  Created by HuQiaoNan on 14-9-6.
////  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
////
//
//#include "pat1084eng.h"

#include <map>
#include <iostream>
using namespace std;

map<char,char> occures;

int main()
{
   string ori,broken;
   getline(cin,ori);
   getline(cin,broken);
   int len1 = ori.size();
   int len2 = ori.size();
   int i=0,j=0;
   for(i=0;i<len1;i++)
   {
       ori[i] = toupper(ori[i]);
   }
   for(i=0;i<len2;i++)
   {
       broken[i] = toupper(broken[i]);
   }
   i = j = 0;
   while(i<len1&&j<len2)
   {
       if(ori[i]!=broken[j])
       {
           if(occures.count(ori[i])==0)
           {
               occures[ori[i]] = ori[i];
               cout<<ori[i];
           }
           i++;
       }else
       {
           i++;
           j++;
       }
   }
   cout<<endl;
   return 0;
}

