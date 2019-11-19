#pragma once
#include<iostream>
#include<time.h>
#include<math.h>
#include<string.h>
#include<sstream>
using namespace std;
string str_Nonsense[11] = { "�ڲۣ�������ǽ��������������˵��ˣ�",
							"Ŷ������̫���������ˣ�",
							"��϶����и����ĵ�һ�죡",
							"������ɢ��",
							"�һ����������",
							"û�������ļӳɣ���������Կ�ʵ����",
							"ֻ����һ�㵹ù���ѣ���ȫ���ɷ�",
							"��Ȼ�ܵ�ù����ҲҪ������",
							"���������и�����Ի�������",
							"���������и�����Ի�������",
							"�㲻�����������У����������ĵ�ù�������������㡣"};

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

	context += "   ����ָ��:" + str_luckLevel + "\n" + str_Nonsense[10 - luckLevel / 10];
	return context;
}