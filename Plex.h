#pragma once
#include<iostream>
#include<stack>
#include<windows.h>
#include<cmath>
#include<fstream>

using namespace System::Drawing;
const int MAXSIZE = 20;
const int PointWidth = 4;
const int PointHeight = 4;
const int LineWidth = 3;
class TRoot;
class TPoint;
class TChart;
struct TLine {
	TChart* pChart;
	TPoint* pFp, * pLp;
};
class TRoot
{
protected:
	bool active, visible;
public:
	TRoot();
	bool IsVisible();
	bool IsActive();
	virtual void show(Graphics^ gr, Pen^ p = nullptr) = 0;
	virtual void hide(Graphics^ gr, Pen^ p = nullptr) = 0;
};
class TPoint : public TRoot 
{
protected: 
	int x, y;
public:
	TPoint(int x1 = 0, int y1 = 0);
	void SetX(int val);
	void SetY(int val);
	int GetX() const;
	int GetY() const;
	void show(Graphics^ gr, Pen^ p = nullptr) override;
	void hide(Graphics^ gr, Pen^ p = nullptr) override;
};
class TChart :public TRoot
{
	TRoot* pFirst, * pLast;
	std::stack<TLine> st;
public:
	TChart();
	~TChart();
	int GetSize();
	void SetFirst(TRoot* p);
	void SetLast(TRoot* p);
	TRoot* GetFisrt();
	TRoot* GetLast();
	void show(Graphics^ gr, Pen^ p = nullptr) override;
	void hide(Graphics^ gr, Pen^ p = nullptr) override;
	bool InsLine(TChart* line);
	void save(std::string filename);
	void read(std::string filename);
	void move(int _x = 0, int _y = 0);
};

