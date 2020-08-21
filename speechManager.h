#pragma once
#include<iostream>
using namespace std;

#include<vector>
#include<map>
#include "speaker.h"


//�ݽ�������
class SpeechManager {
public:

	//���캯��
	SpeechManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��ʼ������
	void initSpeech();

	//����ѡ��
	void createSpeaker();

	//������ʼ - �������̿���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ��������
	void showScore();

	//�������
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ����÷�
	void showRecord();

	//�����¼
	void clearRecord();

	//��������
	~SpeechManager();

public: //����
	//����ѡ�� ���� 12����
	vector<int> v1;

	//��һ�ֽ��� ���� 6����
	vector<int> v2;

	//ǰ���� ���� 3����
	vector<int> vVictory;

	//��ű�� �Լ���Ӧ�ľ���ѡ�� ����
	map<int, Speaker> m_Speaker;

	//��������
	int m_Index;

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;

	//�洢�����¼������
	map<int, vector<string>> m_Record;
};
