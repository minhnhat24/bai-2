#pragma once
#include "hcn.h"
class nutbam :
	public hcn
{
private:
	int x1,y1,x2,y2;
public:
	CString text;
	void draw(CClientDC *pdc);
	//int kttronghinh(CPoint p1);
	nutbam(CPoint p1, CPoint p2);
	nutbam(void);
	~nutbam(void);
};

