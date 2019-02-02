////
////  pat1087eng.cpp
////  acmProject
////
////  Created by HuQiaoNan on 14-9-6.
////  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
////
//
////#include "pat1087eng.h"
//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <map>
//#include <vector>
//
//using namespace std;
//#define MAX 66666666
//#define SIZE 203
//// output: number of routes,lowest cost, happiness,avgHap
//vector<int> resPath;
//int routeSum=0,shortest = MAX,resHap=0,avgHap = 0;
//map<string,int> hapiness1;
//map<int,string> hapiness2;
//map<int,int> hapSet;
//int graph[SIZE][SIZE];
//int dij[SIZE];
//int visit[SIZE];
//int n,k;
//void dfs(int start,int end,vector<int> &path,int hapSum,int pathSum);
//void dijkstra(int s);
//
//int main()
//{
//    int i,j,index1,tmp1,tmp2,tmp3;
//    int dest = 0;
//    string city1,city2,city3,city4;
//    cin>>n>>k>>city1;
//    index1= 0;
//    hapiness1[city1] = index1;
//    hapiness2[index1] = city1;
//    hapSet[index1] = 0;
//    for(i=1;i<n;i++)
//    {
//        cin>>city2>>tmp1;
//        if(city2.compare("ROM")==0)
//        {
//            dest = i;
//        }
//        hapiness1[city2] = i;
//        hapiness2[i] = city2;
//        hapSet[i] = tmp1;
//    }
//    for(i=0;i<n;i++)
//    {
//        dij[i] = MAX;
//        for(j=0;j<n;j++)
//        {
//            graph[i][j] = MAX;
//        }
//    }
//    for(i=0;i<k;i++)
//    {
//        cin>>city2>>city3>>tmp1;
//        tmp2 = hapiness1[city2];
//        tmp3 = hapiness1[city3];
//        if(tmp1<graph[tmp2][tmp3])
//        {
//            graph[tmp2][tmp3] = tmp1;
//            graph[tmp3][tmp2] = tmp1;
//        }
//    }
//    
//    dijkstra(0);
//    for(i=0;i<n;i++)
//    {
//        visit[i] = 0;
//    }
//    shortest = dij[dest];
//    vector<int> myPath(1,0);
//    visit[0] = 1;
//    dfs(0,dest,myPath,0,0);
//    printf("%d %d %d %d\n",routeSum,shortest,resHap,avgHap);
//    cout<<city1;
//    for(i=1;i<resPath.size();i++)
//    {
//        cout<<"->"<<hapiness2[resPath[i]];
//    }
//    cout<<endl;
//    return 0;
//}
//
//void dfs(int start,int end,vector<int> &path,int hapSum,int pathSum)
//{
//    int i,j;
//    if(pathSum>shortest)
//    {
//        return ;
//    }
//    if(start==end)
//    {
//        if(pathSum>shortest)
//        {
//            return ;
//        }
//        routeSum ++;
//        if(hapSum<resHap)
//        {
//            return ;
//        }
//        int ta = hapSum/(path.size()-1);
//        if(ta>avgHap)
//        {
//            resPath = path;
//            avgHap = ta;
//            resHap = hapSum;
//        }
//        return ;
//    }
//    for(i=0;i<n;i++)
//    {
//        if(!visit[i] && graph[start][i]!=MAX)
//        {
//            path.push_back(i);
//            visit[i] = 1;
//            dfs(i,end,path,hapSum + hapSet[i],pathSum+graph[start][i]);
//            path.pop_back();
//            visit[i] = 0;
//        }
//    }
//}
////6:52 ->6:58
//void dijkstra(int s)
//{
//    int i,j,tmp,so;
//    for(i=0;i<n;i++)
//    {
//        dij[i] = graph[s][i];
//        visit[i] = 0;
//    }
//    dij[s] = 0;
//    visit[s] = 1;
//    
//    for(i=1;i<n;i++)
//    {
//        tmp = MAX;
//        so = s;
//        for(j=0;j<n;j++)
//        {
//            if(!visit[j] && dij[j]<tmp)
//            {
//                tmp = dij[j];
//                so = j;
//            }
//        }
//        visit[so] = 1;
//        for(j=0;j<n;j++)
//        {
//            if(!visit[j] && dij[so]+graph[so][j]<dij[j])
//            {
//                dij[j] = dij[so]+graph[so][j];
//            }
//        }
//    }
//    
//}
