#pragma once
#include "CWall.h"
class CShopWall : public CWall
{
public:
	CShopWall();
	virtual ~CShopWall();
public:
	void Initialize() override;
	int Update() override;
	void Late_Update() override;
	void Render(HDC hDC) override;
	void Release() override;


};

