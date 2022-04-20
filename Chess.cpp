#include"Chess.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<climits>
#include<stdlib.h>
#include<random>
using std::cin;     using std::pair;
using std::cout;    using std::endl;
using std::vector;  using std::string;
int numberOfBlackRoad[7]{ 0 };
int numberOfWhiteRoad[7]{ 0 };
int scoreOfBlackRoad[7]{ 0,1,5,10,25,25,10000 };
int scoreOfWhiteRoad[7]{ 0,1,10,15,35,25,10000 };
struct HashItem
{
    long check;
    int depth;
    int value;
}*hash[1024 * 1024];
Chess::Chess()
    :m_chess{ 0 }
    , m_player{ 1 }
    , m_step{ 0 }
    , m_win{ 3 }
    , m_HashKey32{ 0 }
    , m_HashKey64{ 0 }
    ,m_depth{0}
//{
//    for(int a=0;a<19;a++)
//        for (int b = 0; b < 19; b++)
//        {
//            if (m_chess[a][b] != 0)
//            {
//                int x = a;
//                int y = b;
//                //cout << "\nadd��ӵĵ�Ϊ��";
//                //vector<struct loc>lastAdd;//��һ����ӵ���������
//                for (int i = -2; i < 3; i++)
//                    //int i = -2;
//                {
//                    if (x + i >= 0 && x + i <= 18)
//                    {
//                        loc temp = { x + i,y };
//                        if (m_chess[x + i][y] == 0 && !contain(search, temp))
//                        {
//                            search.push_back(temp);
//                            //cout << temp.x << "," << temp.y << "\t";
//                        }
//                    }
//                    if (y + i >= 0 && y + i <= 18)
//                    {
//                        loc temp = { x ,y + i };
//                        if (m_chess[x][y + i] == 0 && !contain(search, temp))
//                        {
//                            search.push_back(temp);
//                            //cout << temp.x << "," << temp.y << "\t";
//                        }
//                    }
//                    if (y + i >= 0 && y + i <= 18 && x + i >= 0 && x + i <= 18 && x - i >= 0 && x - i <= 18)
//                    {
//                        loc temp1 = { x + i ,y + i };
//                        loc temp2 = { x - i ,y + i };
//                        if (m_chess[x + i][y + i] == 0 && !contain(search, temp1))
//                        {
//                            search.push_back(temp1);
//                            //cout << temp1.x << "," << temp1.y << "\t";
//                        }
//                        if (m_chess[x - i][y + i] == 0 && !contain(search, temp2))
//                        {
//                            search.push_back(temp2);
//                            //cout << temp2.x << "," << temp2.y << "\t";
//                        }
//                    }
//                }
//            
//            
//            }
//        }
{
   
    std::default_random_engine e(time(0));
    std::uniform_real_distribution<double> u(0, 1);
    for (int k = 0; k < 2; k++)
        for (int i = 0; i < 19; i++)
            for (int j = 0; j < 19; j++)
            {
                m_zobrist_HashKey32[k][i][j] = (int)(u(e) * INT_MAX);
                //cout << m_zobrist_HashKey32[k][i][j] << endl;
                m_zobrist_HashKey64[k][i][j] = (long)(u(e) * LONG_MAX);
                //cout << m_zobrist_HashKey64[k][i][j] << endl;
            }
    for (int i = 0; i < 1024 * 1024; i++)
        hash[i] = nullptr;
}
//���̻���
void Chess::draw()
{
   // system("cls");
    for (int i = 0; i < 19; i++) {
        cout << std::setw(5) << 19 - i << " ";
        for (int j = 0; j < 19; j++) {
            if (m_chess[i][j] == 1) {
                cout << "��";//��ӡ����
                continue;
            }
            if (m_chess[i][j] == 2) {
                cout << "��";//��ӡ����
                continue;
            }
            if (i == 0)
            {
                switch (j)
                {
                case 0:
                    cout << "�� ";
                    continue;
                case 18:
                    cout << "��";
                    continue;
                default:
                    cout << "�� ";
                    continue;
                }
            }
            if (i == 18)
            {
                switch (j)
                {
                case 0:
                    cout << "�� ";
                    continue;
                case 18:
                    cout << "��";
                    continue;
                default:
                    cout << "�� ";
                    continue;
                }
            }
            switch (j)
            {
            case 0:
                cout << "�� ";
                continue;
            case 18:
                cout << "��";
                continue;
            default:
                cout << "�� ";
                continue;
            }
        }
        cout << endl;
    }
    cout << "      A B C D E F G H I J K L M N O P Q R S " << endl;//��ӡ��Ӧ������
    cout << endl;
}
bool Chess::contain(vector< loc>search, loc value)
{

    for (vector<loc>::iterator it = search.begin(); it != search.end(); it++)
    {
        if ((*it) == value)
            return true;
    }
    return false;
}
//������k��λ���Ƿ���ȫ���0
bool hasDone(vector<bool>index, int n, int k)
{
    for (int i = n - 1; i >= n - k; i--)
    {
        if (!index[i])
        {
            return false;
        }
    }
    return true;
}
//���
void Chess::Comb(vector<struct loc>a, vector<pair<loc, loc>>& b, int n)
{
    loc temp[2];
    vector <bool>index(n, false);
    //ѡ��ǰk��λ��
    for (int i = 0, j = 0; i < 2; i++)
    {
        index[i] = true;
        temp[j++] = search[i];
    }
    b.push_back({ temp[0], temp[1] });
    while (!hasDone(index, n, 2))
    {
        //������ɨ������
        for (int i = 0; i < n - 1; i++)
        {
            //�ҵ���һ����10����Ͻ�����"01"���
            if (index[i] && !index[i + 1])
            {
                index[i] = false;
                index[i + 1] = true;

                //��"01"�����ߵ�1�Ƶ������
                int count = 0;
                for (int j = 0; j < i; j++)
                {
                    if (index[j])
                    {
                        index[j] = false;
                        index[count++] = true;
                    }
                }
                for (int i = 0, j = 0; i < n; i++)
                {
                    if (index[i])
                        temp[j++] = search[i];
                }
                b.push_back({ temp[0], temp[1] });
                break;
            }
        }
    }
}
//��ʼ
void Chess::play()
{
    draw();
    showWho();
    ourFirstPlay();
    while (!isEnd())
    {
        draw();
        showWho();
        if (m_player == 1)
            ourplay();
        else
            oppoplay();
        //ourplay();
    }
    draw();
    showWhoWin();

}
//��ʾ��˭
void Chess::showWho()
{
    if (m_player == 1)
    {
        cout << "\n\n\t�ֵ��ڷ�����\n";
    }
    else
    {
        cout << "\n\n\t�ֵ��׷�����\n";
    }
}
//�ж��Ƿ����
bool Chess::isEnd()
{
    //-1->white  1->black
    for (int i = 0; i < 14; i++)
        for (int j = 0; j < 14; j++)
        {
            int end1 = 0, end2 = 0, end3 = 0;
            for (int k = 0; k < 6; k++)
            {
                if (m_chess[i][j + k] == 2)
                    end1 += -1;
                else
                    end1 += m_chess[i][j + k];//����
                if (m_chess[i + k][j] == 2)
                    end2 += -1;
                else
                    end2 += m_chess[i + k][j];//����
                if (m_chess[i + k][j + k] == 2)
                    end3 += -1;
                else
                    end3 += m_chess[i + k][j + k];//б��
            }

            if (end1 / 6 < 0 || end2 / 6 < 0 || end3 / 6 < 0)
            {
                m_win = WIN_WHITE; return true;
            }
            if (end1 / 6 > 0 || end2 / 6 > 0 || end3 / 6 > 0)
            {
                m_win = WIN_BLACK; return true;
            }
        }
    int countNull = 0;
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++)
        {
            if (m_chess[i][j] == 0)
                countNull++;
        }
    if (countNull == 0)
    {
        m_win = TIE; return true;
    }
    return false;
}
//��ʾ˭Ӯ
void Chess::showWhoWin()
{
    switch (m_win)
    {
    case 1:
        cout << "\n\t�ڷ�ʤ��";
        break;
    case 2:
        cout << "\n\t�׷�ʤ��";
        break;
    default:
        cout << "\n\tƽ��";
    }
}
//���ɵ�ǰ����Ĺ�ϣ��
void Chess::hashKey()
{
    int type;
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++)
        {
            if (m_chess[i][j] != 0)
            {
                type = m_chess[i][j] % 2;
                m_HashKey32 = m_HashKey32 ^ m_zobrist_HashKey32[type][i][j];
                m_HashKey64 = m_HashKey64 ^ m_zobrist_HashKey64[type][i][j];
            }
        }
}
//��ѯhash��
bool Chess::hashCheck()
{
    hashKey();
    int index = m_HashKey32 & 0xFFFFF;
    if (hash[index] && m_HashKey64 == hash[index]->check && hash[index]->depth >= m_depth - MAX_DEPTH)
        return true;
    else
        return false;
       
}
//����hash��
void Chess::hashUpdate(int value)
{
    hashKey();
    int index = m_HashKey32 & 0xFFFFF;
    if (!hash[index])
    {
        hash[index] = new HashItem();
        hash[index]->check = m_HashKey64;
        hash[index]->depth = m_depth - MAX_DEPTH;
        hash[index]->value = value;
    }
    else
    {
        if(hash[index]->check == m_HashKey64&& hash[index]->depth < m_depth - MAX_DEPTH)
            hash[index]->value = value;
    }
}
//����
void Chess::set(struct loc location)
{
    int x = location.x;
    int y = location.y;
    m_chess[x][y] = m_player;
    if (contain(search, location))           //Ҫ��ɾ������չ
    {
        for (vector<loc>::iterator it = search.begin(); it != search.end(); it++)
            if (*it == location)
            {
                search.erase(it);
                break;
            }
    }
}
//��չ�������У�����ֵ����һ�������������λ
void Chess::add(struct loc location, vector<loc>& lastAdd)
{
    int x = location.x;
    int y = location.y;
    for (int i = -2; i < 3; i++)
    //int i = -2;
    {
        if (x + i >= 0 && x + i <= 18)
        {
            loc temp = { x + i,y };
            if (m_chess[x + i][y] == 0 && !contain(search, temp))
            {
                search.push_back(temp);
                lastAdd.push_back(temp);
            }
        }
        if (y + i >= 0 && y + i <= 18)
        {
            loc temp = { x ,y + i };
            if (m_chess[x][y + i] == 0 && !contain(search, temp))
            {
                search.push_back(temp);
                lastAdd.push_back(temp);
            }
        }
        if (y + i >= 0 && y + i <= 18 && x + i >= 0 && x + i <= 18 && x - i >= 0 && x - i <= 18)
        {
            loc temp1 = { x + i ,y + i };
            loc temp2 = { x - i ,y + i };
            if (m_chess[x + i][y + i] == 0 && !contain(search, temp1))
            {
                search.push_back(temp1);
                lastAdd.push_back(temp1);
            }
            if (m_chess[x - i][y + i] == 0 && !contain(search, temp2))
            {
                search.push_back(temp2);
                lastAdd.push_back(temp2);
            }
        }
    }
}
//�������巽
void Chess::swap()
{
    m_step = 0;
    m_player == 1 ? m_player = 2 : m_player = 1;
}
//���ֲ���
void Chess::ourFirstPlay()
{
    vector<loc> temp;
    loc location{ 9,9 };
    set(location);//����
    add(location, temp);//��չ��������
    swap();//�������巽
    m_depth++;
}
//�Է�
void Chess::oppoplay()
{
    vector<loc>temp;
    char x; int y;
    loc location;
    cout << "\n\t�������������   �磨A 1��       ";
    cin >> x >> y;
    while (!(('A' <= x && x <= 'S') && ((1 <= y && y <= 19)
        && m_chess[19 - y][x - 65] == 0))) {
        std::string rubbish;
        cin.clear();
        getline(cin, rubbish);
        cout << "\t������Ϸ�����";
        cin >> x >> y;
    }
    location = { 19 - y,x - 65 };
    set(location);
    add(location, temp);
    m_step++;
    if (m_step == 2)
    {
        swap();
        m_depth++;
    }
}
//�ҷ�
void Chess::ourplay()
{
    vector<loc>temp;
    negamax(MAX_DEPTH, -MAX, MAX);
    set(m_best.first);
    add(m_best.first, temp);
    set(m_best.second);
    add(m_best.second, temp);
    swap();
    m_depth++;
}
void Chess::AnalyHH()
{
    int x1 = m_last.x, y1 = m_last.y;
    int x2 = m_llast.x, y2 = m_llast.y;
    for (int i = y1 - 5 > 0 ? y1 - 5 : 0; i <= y1 && i + 5 < 19; i++)//����
    {
        int number = 0;
        for (int j = 0; j < 6; j++)
        {
            if (m_chess[x1][i + j] == 2)
                number += 7;
            else
                number += m_chess[x1][i + j];
        }
        if (number == 0 || number > 6 && number % 7 != 0)
            continue;
        if (number < 7)
            numberOfBlackRoad[number]++;
        else
            numberOfWhiteRoad[number / 7]++;
    }
    for (int i = y2 - 5 > 0 ? y2 - 5 : 0; i <= y2 && i + 5 < 19; i++)//����
    {
        int number = 0;
        if (i == y1 || i + 1 == y1 || i + 2 == y1 || i + 3 == y1 || i + 4 == y1 || i + 5 == y1)
            continue;
        for (int j = 0; j < 6; j++)
        {
            if (m_chess[x2][i + j] == 2)
                number += 7;
            else
                number += m_chess[x2][i + j];
        }
        if (number == 0 || number > 6 && number % 7 != 0)
            continue;
        if (number < 7)
            numberOfBlackRoad[number]++;
        else
            numberOfWhiteRoad[number / 7]++;
    }
}
void Chess::AnalyVV()
{
    int x1 = m_last.x, y1 = m_last.y;
    int x2 = m_llast.x, y2 = m_llast.y;
    for (int i = x1 - 5 > 0 ? x1 - 5 : 0; i <= x1 && i + 5 < 19; i++)//����
    {
        int number = 0;
        for (int j = 0; j < 6; j++)
        {
            if (m_chess[i + j][y1] == 2)
                number += 7;
            else
                number += m_chess[i + j][y1];
        }
        if (number == 0 || number > 6 && number % 7 != 0)
            continue;
        if (number < 7)
            numberOfBlackRoad[number]++;
        else
            numberOfWhiteRoad[number / 7]++;
    }
     for (int i = x2 - 5 > 0 ? x2 - 5 : 0; i <= x2 && i + 5 < 19; i++)//����
    {
        int number = 0;
        if (i == x1 || i + 1 == x1 || i + 2 == x1 || i + 3 == x1 || i + 4 == x1 || i + 5 == x1)
            continue;
        for (int j = 0; j < 6; j++)
        {
            if (m_chess[i + j][y2] == 2)
                number += 7;
            else
                number += m_chess[i + j][y2];
        }
        if (number == 0 || number > 6 && number % 7 != 0)
            continue;
        if (number < 7)
            numberOfBlackRoad[number]++;
        else
            numberOfWhiteRoad[number / 7]++;
    }
}
void Chess::AnalyRR()
{
    int x1 = m_last.x, y1 = m_last.y;
    int x2 = m_llast.x, y2 = m_llast.y;
    for (int i = x1 - 5 > 0 ? x1 - 5 : 0, j = y1 - 5 > 0 ? y1 - 5 : 0;
        i <= x1 && i + 5 < 19 && j <= y1 && j + 5 < 19; i++, j++)//����
    {
        int number = 0;
        for (int k = 0; k < 6; k++)
        {
            if (m_chess[i + k][j + k] == 2)
                number += 7;
            else
                number += m_chess[i + k][j + k];
        }
        if (number == 0 || number > 6 && number % 7 != 0)
            continue;
        if (number < 7)
            numberOfBlackRoad[number]++;
        else
            numberOfWhiteRoad[number / 7]++;
    }
    for (int i = x2 - 5 > 0 ? x2 - 5 : 0, j = y2 - 5 > 0 ? y2 - 5 : 0;
        i <= x2 && i + 5 < 19 && j <= y2 && j + 5 < 19; i++, j++)//����
    {
        int number = 0;
        if (i == x1 && j == y1 || i + 1 == x1 && j + 1 == y1 || i + 2 == x1 && j + 2 == y1 || i + 3 == x1 && j + 3 == y1 || i + 4 == x1 && j + 4 == y1 || i + 5 == x1 && j + 5 == y1)
            continue;
        for (int k = 0; k < 6; k++)
        {
            if (m_chess[i + k][j + k] == 2)
                number += 7;
            else
                number += m_chess[i + k][j + k];
        }
        if (number == 0 || number > 6 && number % 7 != 0)
            continue;
        if (number < 7)
            numberOfBlackRoad[number]++;
        else
            numberOfWhiteRoad[number / 7]++;
    }
}
void Chess::AnalyLL()
{
    int x1 = m_last.x, y1 = m_last.y;
    int x2 = m_llast.x, y2 = m_llast.y;
    for (int i = x1 - 5 > 0 ? x1 - 5 : 0, j = y1 + 5 < 19 ? y1 + 5 : 18;
        i <= x1 && i + 5 < 19 && j >= y1 && j - 5 > 0; i++, j--)//����
    {
        int number = 0;
        for (int k = 0; k < 6; k++)
        {
            if (m_chess[i + k][j - k] == 2)
                number += 7;
            else
                number += m_chess[i + k][j - k];
        }
        if (number == 0 || number > 6 && number % 7 != 0)
            continue;
        if (number < 7)
            numberOfBlackRoad[number]++;
        else
            numberOfWhiteRoad[number / 7]++;
    }
    for (int i = x2 - 5 > 0 ? x2 - 5 : 0, j = y2 + 5 < 19 ? y2 + 5 : 18;
        i <= x2 && i + 5 < 19 && j >= y2 && j - 5 > 0; i++, j--)//����
    {
        int number = 0;
        if (i == x1 && j == y1 || i + 1 == x1 && j - 1 == y1 || i + 2 == x1 && j - 2 == y1 || i + 3 == x1 && j - 3 == y1 || i + 4 == x1 && j - 4 == y1 || i + 5 == x1 && j - 5 == y1)
            continue;
        for (int k = 0; k < 6; k++)
        {
            if (m_chess[i + k][j - k] == 2)
                number += 7;
            else
                number += m_chess[i + k][j - k];
        }
        if (number == 0 || number > 6 && number % 7 != 0)
            continue;
        if (number < 7)
            numberOfBlackRoad[number]++;
        else
            numberOfWhiteRoad[number / 7]++;
    }
}
int Chess::estimate()
{
    int pre = 0, after = 0;
    int x1 = m_last.x, y1 = m_last.y;
    int x2 = m_llast.x, y2 = m_llast.y;
    int type = m_chess[x1][y1];
    m_chess[x1][y1] = 0;//�������
    m_chess[x2][y2] = 0;//�������
    for (int i = 0; i < 7; i++)
    {
        numberOfBlackRoad[i] = 0;
        numberOfWhiteRoad[i] = 0;
    }
    AnalyHH();
    AnalyVV();
    AnalyRR();
    AnalyLL();
    for (int i = 1; i <= 6; i++)
        pre += numberOfBlackRoad[i] * scoreOfBlackRoad[i] - numberOfWhiteRoad[i] * scoreOfWhiteRoad[i];
    m_chess[x1][y1] = type;
    m_chess[x2][y2] = type;
    for (int i = 0; i < 7; i++)
    {
        numberOfBlackRoad[i] = 0;
        numberOfWhiteRoad[i] = 0;
    }
    AnalyHH();
    AnalyVV();
    AnalyRR();
    AnalyLL();
    for (int i = 1; i <= 6; i++)
        after += numberOfBlackRoad[i] * scoreOfBlackRoad[i] - numberOfWhiteRoad[i] * scoreOfWhiteRoad[i];
   // cout << after - pre << endl;
    return (after - pre)*pow(-1,type);
}
void Chess::retract(loc location)
{
    int x = location.x;
    int y = location.y;
    m_chess[x][y] = 0;
    search.push_back(location);
    if (m_step == 0)
    {
        m_step = 2;
        m_player == 1 ? m_player = 2 : m_player = 1;
    }
    m_step--;
}
//��֦
int Chess::negamax(int depth, int alpha, int beta)
{
    int value=-MAX;
    vector<pair<loc, loc>>combine;
    vector<loc>temp;
    vector<loc>::iterator it;
    if (hashCheck())
        return hash[m_HashKey32]->value;
    if (isEnd())
        return estimate();
    if (depth == 0)
        return estimate();
    Comb(search, combine, search.size());
    for (int i = 0; i < combine.size() && alpha < beta; i++)
    {
        m_last = combine[i].first;
        m_llast = combine[i].second;
        set(combine[i].first);
        set(combine[i].second);
        m_depth++;
        if (depth != 1)
        {
            add(combine[i].first, temp);
            add(combine[i].second, temp);
        }
        swap();
        value = -negamax(depth - 1, -beta, -alpha);
        hashUpdate(value);
        retract(combine[i].first);
        retract(combine[i].second);
        m_depth--;
        if (!temp.empty()&&depth!=1)
        {
            for (it = temp.begin(); it != temp.end(); ++it)
                search.erase(std::remove(search.begin(), search.end(), *it), search.end());
            temp.clear();
        }
        if (value > alpha)
        {
            alpha = value;
            if (depth == MAX_DEPTH)
                m_best = combine[i];
        }
    }
    return alpha;
}