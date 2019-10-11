#include "stdafx.h"
#include "hcn.h"

hcn::hcn(CPoint p1, CPoint p2)
{
	point1.x = p1.x;
	point1.y = p1.y;
	point2.x = p2.x;
	point2.y = p2.y;
	x1 = p1.x;
	x2 = p2.x;
	y1 = p1.y;
	y2 = p2.y;
}
hcn::hcn(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void hcn::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void hcn::draw(CClientDC *pdc)
{
	pdc->Rectangle(x1, y1, x2, y2);
	CString strS,strP;
	strS.Format(_T("  Dien tich hcn la : %f"), dientich());
	strP.Format(_T("  Chu vi hcn la : %f"), chuvi());
	pdc->TextOutW(700, 10, strS);
	pdc->TextOutW(700, 40, strP);
}
void hcn::xemlai(CClientDC *pdc)
{
	CString strS, strP;
	strS.Format(_T("  Dien tich hcn la : %f"), dientich());
	strP.Format(_T("  Chu vi hcn la : %f"), chuvi());
	pdc->TextOutW(700, 10, strS);
	pdc->TextOutW(700, 40, strP);
}
CPoint hcn::getA()
{
	return CPoint(x1, y1);
}
CPoint hcn::getC()
{
	return CPoint(x2, y2);
}
int hcn::kttronghinh(CPoint p1)
{
	int kq = 0;
	if (p1.x >= x1 && p1.x <= x2 && p1.y >= y1 && p1.y <= y2)
		kq = 1;
	return kq;
} 


float hcn::dientich()
{
	// TODO: Add your implementation code here.
	float kq = 0;
	kq = ((x1 - x2)*(y1 - y2));
	return kq;
}
float hcn::chuvi()
{
	// TODO: Add your implementation code here.
	float kq = 0;
	kq = abs((x1 - x2)+(y1 - y2))*2;
	return kq;
}
hcn::hcn(void)
{
}


hcn::~hcn(void)
{
}
