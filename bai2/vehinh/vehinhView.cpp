
// vehinhView.cpp : implementation of the CvehinhView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "vehinh.h"
#endif

#include "vehinhDoc.h"
#include "vehinhView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CvehinhView

IMPLEMENT_DYNCREATE(CvehinhView, CView)

BEGIN_MESSAGE_MAP(CvehinhView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CvehinhView construction/destruction

CvehinhView::CvehinhView()
{
	// TODO: add construction code here
	
	control = 1;
	n = 0;
}

CvehinhView::~CvehinhView()
{
}

BOOL CvehinhView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CvehinhView drawing

void CvehinhView::OnDraw(CDC* /*pDC*/)
{
	CvehinhDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC = new CClientDC(this);
	//ph[n]->c = CString("aakakaka");
	//ph[n]->draw(pDC);
	// TODO: add draw code for native data here
}


// CvehinhView printing

BOOL CvehinhView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CvehinhView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CvehinhView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CvehinhView diagnostics

#ifdef _DEBUG
void CvehinhView::AssertValid() const
{
	CView::AssertValid();
}

void CvehinhView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CvehinhDoc* CvehinhView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CvehinhDoc)));
	return (CvehinhDoc*)m_pDocument;
}
#endif //_DEBUG


// CvehinhView message handlers


void CvehinhView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p1.x = point.x;
	p1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CvehinhView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p2.x = point.x;
	p2.y = point.y;

	if (control == 1 )//hcn
					{
						ph[n] = new hcn(p1, p2);
						ph[n]->draw(pDC);
						n++;
						
					}
	
	CView::OnLButtonUp(nFlags, point);
}


void CvehinhView::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	CClientDC pdc(this);
	for (int i = 0; i < n; i++)
	{
		if (ph[i]->kttronghinh(point) == 1)
		{
			ph[i]->xemlai(&pdc);
		}
	}
	CView::OnRButtonUp(nFlags, point);
}
