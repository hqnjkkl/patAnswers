//
//  forkTest.cpp
//  acmProject
//
//  Created by HuQiaoNan on 14-10-10.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#include "forkTest.h"
#include <stdio.h>

#include <unistd.h>

using namespace std;

int main()
{
    for(int i=0;i<2;i++)
    {
        fork();
      //  printf("4\n");
        puts("6");
      //  flush();
    }
    return 0;
}

//void product()
//{
//    while(!P(s))
//    {
//        wait();
//    }
//    queue.push();
//    V(s);
//    notify();
//    return ;
//}

