#include "stdafx.h"
#include "nutbam.h"


void nutbam::draw(CClientDC *pdc)
{
	// TODO: Add your implementation code here.
	pdc->Rectangle(getA().x, getA().y, getC().x, getC().y);
	pdc->TextOutW(getA().x +18, getA().y + 18, text);
}
nutbam::nutbam(CPoint p1, CPoint p2)
{
	x1 = p1.x;
	x2 = p2.x;
	y1 = p1.y;
	y2 = p2.y;
}
/*int nutbam::kttronghinh(CPoint p1)
{
	int kq = 0;
	if (p1.x >= x1 && p1.x <= x2 && p1.y >= y1 && p1.y <= y2)
		kq = 1;
	return kq;
}*/
nutbam::nutbam(void)
{
}


nutbam::~nutbam(void)
{
}
