/********************************************************************
*
* This file is part of the TeXnicCenter-system
*
* Copyright (C) 1999-2000 Sven Wiegand
* Copyright (C) 2000-$CurrentYear$ ToolsCenter
* 
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*
* If you have further questions or if you want to support
* further TeXnicCenter development, visit the TeXnicCenter-homepage
*
*    http://www.ToolsCenter.org
*
*********************************************************************/

/********************************************************************
*
* $Id$
*
********************************************************************/

#include "stdafx.h"
#include "TeXnicCenter.h"
#include "OptionDialog.h"
#include "OptionPagePath.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//-------------------------------------------------------------------
// class COptionDialog
//-------------------------------------------------------------------

IMPLEMENT_DYNAMIC(COptionDialog, CPropertySheet)


BEGIN_MESSAGE_MAP(COptionDialog, CPropertySheet)
	//{{AFX_MSG_MAP(COptionDialog)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


COptionDialog::COptionDialog( CWnd* pParentWnd, UINT iSelectPage )
	:CPropertySheet(STE_OPTIONS_TITLE, pParentWnd, iSelectPage)
{
	// Remove the apply button
	m_psh.dwFlags |= PSH_NOAPPLYNOW;
 
	AddPage( &m_pageGeneric );
	AddPage( &m_pageFile );
	AddPage( &m_pagePath );
	AddPage( &m_pageLanguage );
	AddPage( &m_pageFileClean );
}


COptionDialog::~COptionDialog()
{
}


BOOL COptionDialog::OnInitDialog() 
{
	BOOL bResult = CPropertySheet::OnInitDialog();

	// hide apply button
//	CWnd	*pWnd = GetDlgItem( ID_APPLY_NOW );
//	ASSERT_VALID( pWnd );
//	pWnd->ShowWindow( SW_HIDE );
	
	return bResult;
}