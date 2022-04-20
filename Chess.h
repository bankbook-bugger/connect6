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
};//位置信息
class Chess
{
public:
	Chess();
	void draw();
	void play();
	void showWho();//输出该谁
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
	//组合cn2
	void Comb(std::vector<loc>, std::vector<std::pair<loc, loc>>&, int n);
	//查找搜索队列中是否包含指定值
	bool contain(std::vector<loc>, loc);
private:
	int m_chess[19][19];//棋盘
	int m_player;//当前走棋方
	int m_step;//走两次落点中的第几步
	int m_win;//谁赢
	int m_zobrist_HashKey32[2][19][19];//使用zobrist技术生成某种棋下在棋盘上某点的特定索引
	long m_zobrist_HashKey64[2][19][19];//特定检验码
	int m_HashKey32;//保存当前局面的索引
	long m_HashKey64;//保存当前局面的校验码
	int m_depth;//记录当前节点的绝对深度
	loc m_last;//
	loc m_llast;//记录上两次落子点
	std::pair< loc, loc>m_best;//最好的着法
	std::vector< loc>search;//搜索队列
};