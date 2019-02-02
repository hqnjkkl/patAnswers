////
////  main.cpp
////  acmProject
////
////  Created by HuQiaoNan on 14-7-11.
////  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
////
//
////首先在mac的文本编辑器当中，符号是中文的，放在xcode当中，又不给具体提示，调试了一会。
////还有就是把map<int>::iterator写反了，这个才是正确的。最后提交，运行超时，是否是每次都进行了排序呢？
////先试试分开排序，再试着用有序集合。分开排序，还是超时，只能用有序集合了
////以为超时是cin cout的问题，改了之后，最后一个case仍然超时，所以参照网上的方法，把字符变成索引
////
//#include <iostream>
//#include <map>
//#include <vector>
//#include <string>
//#include <set>
//#include <iterator>
//#include <algorithm>
//#include <stdio.h>
//using namespace std;
//
//vector<vector<int> > nameToC(26*26*26*11);
//
//int nameToNumber(char *name)
//{
//    return (name[0]-'A')*26*26*10 + (name[1]-'A')*26*10 +(name[2]-'A')*10 + (name[3]-'0');
//}
//
//int main()
//{
//	int n;
//	int i,j,k,index,ni;
//	char name[5];
//	cin>>n>>k;
//	for(i=0;i<k;i++)
//	{
//		cin>>index>>ni;
//		for(j=0;j<ni;j++)
//		{
//            scanf("%s",name);
//			//cin>>name;
//			int tn = nameToNumber(name);
//            nameToC[tn].push_back(index);
//        }
//	}
//	while((scanf("%s",name))!=EOF)
//	{
//		printf("%s ",name);
//        int tn2 = nameToNumber(name);
//		if(nameToC[tn2].size()==0)
//		{
//			cout<<"0\n";
//		}else{
//		vector<int> tmp = nameToC[tn2];
//        int tmpN = tmp.size();
//        cout<<tmpN<<' ';
//            sort(tmp.begin(), tmp.end());
//            for(i=0;i<tmpN;i++)
//        {
//            printf("%d",tmp[i]);
//           // cout<<tmp[i];
//			if(i!=tmpN-1)
//			{
//				printf(" ");
//			}
//       }
//		printf("\n");
//    }
//	}
//	return 0;
//}
