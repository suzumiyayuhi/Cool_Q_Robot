#pragma once
#include<iostream>
#include<time.h>
#include<math.h>
#include<string.h>
#include<sstream>
using namespace std;
string str_Nonsense[11] = { "挖槽！你可能是今天世界上最幸运的人！",
							"哦你真是太鸡儿幸运了！",
							"你肯定会有个开心的一天！",
							"恶灵退散！",
							"嘛，一般般的运气。",
							"没有运气的加成，但是你可以靠实力！",
							"只是有一点倒霉而已，完全大丈夫！",
							"虽然很倒霉，但也要振作！",
							"真正的猛男敢于面对坏运气！",
							"真正的猛男敢于面对坏运气！",
							"你不是真正的猛男，你是真正的倒霉蛋。。。摸摸你。"};

string createLuck(int64_t qqId)
{
	stringstream sstr;
	sstr << qqId;
	string str_qqId = sstr.str();
	sstr.clear();
	sstr.str("");

	string context = "[CQ:at,qq=";
	context += str_qqId;
	context += "]";

	srand(time(0));
	int luckLevel = rand() % 101;
	if (luckLevel == 0)
		luckLevel += 100;
	sstr << luckLevel;
	string str_luckLevel=sstr.str();
	sstr.clear();
	sstr.str("");

	context += "   运气指数:" + str_luckLevel + "\n" + str_Nonsense[10 - luckLevel / 10];
	return context;
}