#pragma once
//0->null  1->black   2->white
#include<vector>
#define WIN_BLACK 1
#define WIN_WHITE 2
#define TIE 0
#define OTHER 3

#define MAX 32767
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
//struct extend
//{
//	struct loc location;
//	bool flag;
//};//�������е���Ϣ
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
	int m_chess[19][19];
	int m_player;
	int m_step;
	int m_win;
	loc m_last;
	loc m_llast;
	std::pair< loc, loc>m_best;
	std::vector< loc>search;
};