// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.
#include "StdAfx.h"
#include "VersionControlSettingsTab.h"
#include "EditorFramework/Preferences.h"
#include <QVBoxLayout>

CVersionControlSettingsTab::CVersionControlSettingsTab(QWidget* pParent /*= nullptr*/)
{
	QVBoxLayout* pLayout = new QVBoxLayout();
	pLayout->setMargin(0);
	pLayout->setSpacing(0);

	pLayout->addWidget(GetIEditor()->GetPreferences()->GetPageWidget("Version Control/General"));
	setLayout(pLayout);
}