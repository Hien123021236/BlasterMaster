#pragma once
#include"Object.h";
#include"Collision.h"

class Insect : public Object
{
public:
	enum ANIMATIONS
	{
		IDLERIGHT,
		IDLELEFT,
		FLYRIGHT,
		FLYLEFT,
		DIE,
		_LENGHT
	};

	Insect(int x, int y, int width, int height);
	void Init();
	void Update(DWORD dt, vector<LPOBJECT>* objs);
	void PhysicalCalculate(DWORD dt);
	void Render();

	void DoActionOnCollision(int nx, int ny, Object* obj);
	RECT GetCollisionBox();
	D3DXVECTOR2 GetCollisionBoxCenter();
	~Insect();
};
typedef Insect* LPINSECT;

