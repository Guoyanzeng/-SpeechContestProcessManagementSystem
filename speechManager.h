#pragma once
#include<iostream>
using namespace std;

#include<vector>
#include<map>
#include "speaker.h"


//演讲管理类
class SpeechManager {
public:

	//构造函数
	SpeechManager();

	//展示菜单
	void show_Menu();

	//退出系统
	void exitSystem();

	//初始化属性
	void initSpeech();

	//创建选手
	void createSpeaker();

	//比赛开始 - 比赛流程控制
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示比赛分数
	void showScore();

	//保存分数
	void saveRecord();

	//读取记录
	void loadRecord();

	//显示往届得分
	void showRecord();

	//清除记录
	void clearRecord();

	//析构函数
	~SpeechManager();

public: //属性
	//比赛选手 容器 12个人
	vector<int> v1;

	//第一轮晋级 容器 6个人
	vector<int> v2;

	//前三名 容器 3个人
	vector<int> vVictory;

	//存放编号 以及对应的具体选手 容器
	map<int, Speaker> m_Speaker;

	//比赛轮数
	int m_Index;

	//判断文件是否为空
	bool fileIsEmpty;

	//存储往届记录的容器
	map<int, vector<string>> m_Record;
};
