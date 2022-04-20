#pragma once
//0->null  1->black   2->white
#include<vector>
#define WIN_BLACK 1
#define WIN_WHITE 2
#define TIE 0
#define OTHER 3

#define MAX 32767
#define MAX_DEPTH 2
struct loc
{
public:
	int x;
	int y;
	bool operator==(const loc& right)
	{
		if (this->x == right.x && this->y == right.y)
			return true;
		return false;
	}
};//λ����Ϣ
class Chess
{
public:
	Chess();
	void draw();
	void play();
	void showWho();//�����˭
	void ourFirstPlay();
	void ourplay();
	void oppoplay();
	bool isEnd();
	void showWhoWin();
	void hashKey();
	bool hashCheck();
	void hashUpdate(int value);
	void set(loc location);
	void add(loc location, std::vector<loc>& lastAdd);
	void swap();
	int negamax(int depth, int alpha, int beta);
	void retract(loc location);
	void AnalyHH();
	void AnalyVV();
	void AnalyRR();
	void AnalyLL();
	int estimate();
	//���cn2
	void Comb(std::vector<loc>, std::vector<std::pair<loc, loc>>&, int n);
	//���������������Ƿ����ָ��ֵ
	bool contain(std::vector<loc>, loc);
private:
	int m_chess[19][19];//����
	int m_player;//��ǰ���巽
	int m_step;//����������еĵڼ���
	int m_win;//˭Ӯ
	int m_zobrist_HashKey32[2][19][19];//ʹ��zobrist��������ĳ��������������ĳ����ض�����
	long m_zobrist_HashKey64[2][19][19];//�ض�������
	int m_HashKey32;//���浱ǰ���������
	long m_HashKey64;//���浱ǰ�����У����
	int m_depth;//��¼��ǰ�ڵ�ľ������
	loc m_last;//
	loc m_llast;//��¼���������ӵ�
	std::pair< loc, loc>m_best;//��õ��ŷ�
	std::vector< loc>search;//��������
};