// application.h
#ifndef _APPLICATION_H_
#define _APPLICATION_H_

// GLOBALS
const bool FULL_SCREEN = true;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;

// Include headers
#include <random>
#include <list>

// INCLUDES
#include "Input.h"
#include "Direct3D.h"
#include "Camera.h"
#include "Terrain.h"
#include "Timer.h"
#include "Position.h"
#include "Fps.h"
#include "CPU.h"
#include "Text.h"
#include "TerrainShader.h"
#include "Light.h"
#include "Frustrum.h"
#include "QuadTree.h"
#include "Skydome.h"
#include "SkydomeShader.h"
#include "ShaderManager.h"
#include "States.h"
#include "CarChassis.h"
#include "CarChassisShader.h"
#include "Building.h"
#include "BuildingShader.h"

class Application
{
public:
	// Class constructor/destructor
	Application();
	Application(const Application&);
	~Application();

	// Main game framework functions
	bool Initialize(HINSTANCE, HWND, int, int);
	void Shutdown();
	bool Frame();

private:
	// Graphics and input functions
	bool HandleInput(float);
	bool RenderGraphics();

private:
	// Game Objects and members
	Input* m_Input;
	Direct3D* m_Direct3D;
	Camera* m_Camera;
	Terrain* m_Terrain;
	Timer* m_Timer;
	Position* m_Position;
	Fps* m_Fps;
	CPU* m_Cpu;
	FontShader* m_FontShader;
	Text* m_Text;
	TerrainShader* m_TerrainShader;
	Light* m_Light;
	Frustrum* m_Frustum;
	QuadTree* m_QuadTree;
	Skydome* m_SkyDome;
	SkyDomeShader* m_SkyDomeShader;
	States* m_states;
	CarChassis* m_CarChassis;
	CarChassisShader* m_CarChassisShader;
	Building* m_Building;
	BuildingShader*	m_BuildingShader;
};

#endif