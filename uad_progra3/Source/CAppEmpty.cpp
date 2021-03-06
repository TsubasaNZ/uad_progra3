#include "../stdafx.h"

#include <iostream>
using namespace std;

#include "../Include/Globals.h"
#include "../Include/CAppEmpty.h"

/* */
CAppEmpty::CAppEmpty() :
	CApp(CGameWindow::DEFAULT_WINDOW_WIDTH, CGameWindow::DEFAULT_WINDOW_HEIGHT)
{
	cout << "Constructor: CAppEmpty()" << endl;

	// Initialize class member variables here
	// ======================================
	//
	// ======================================
}

/* */
CAppEmpty::CAppEmpty(int window_width, int window_height) :
	CApp(window_width, window_height)
{
	cout << "Constructor: CAppEmpty(int window_width, int window_height)" << endl;

	// Initialize class member variables here
	// ======================================
	//
	// ======================================
}

/* */
CAppEmpty::~CAppEmpty()
{
	cout << "Destructor: ~CAppEmpty()" << endl;

	// Free memory allocated in this class instance here
	// =================================================
	//
	// =================================================
}

/* */
void CAppEmpty::initialize()
{
	// Initialize app-specific stuff here
	// ==================================
	//
	// ==================================
}

/* */
void CAppEmpty::run()
{
	initialize();

	// Check if CGameWindow object AND Graphics API specific Window library have been initialized
	if (canRun())
	{
		// Create the Window 
		if (getGameWindow()->create(CAPP_PROGRA3_EMPTYAPP_WINDOW_TITLE))
		{
			// Set initial clear screen color
			getOpenGLRenderer()->setClearScreenColor(0.25f, 0.0f, 0.75f);

			// Initialize window width/height in the renderer
			getOpenGLRenderer()->setWindowWidth(getGameWindow()->getWidth());
			getOpenGLRenderer()->setWindowHeight(getGameWindow()->getHeight());

			// Enter main loop
			cout << "Entering Main loop" << endl;
			getGameWindow()->mainLoop(this);
		}
	}
}

/* */
void CAppEmpty::update(double deltaTime)
{
	// Do not update if delta time is < 0
	if (deltaTime <= 0.0f)
	{
		return;
	}

	// Update app-specific stuff here
	// ===============================
	//
	// ===============================
}

/* */
void CAppEmpty::render()
{
	CGameMenu *menu = getMenu();

	// If menu is active, render menu
	if (menu != NULL 
		&& menu->isInitialized() 
		&& menu->isActive())
	{
		//...
	}
	else // Otherwise, render app-specific stuff here...
	{
		// =================================
		//
		// =================================
	}
}

/* */
void CAppEmpty::onMouseMove(float deltaX, float deltaY)
{
	// Update app-specific stuff when mouse moves here 
	// ===============================================
	//
	// ===============================================
}

/* */
void CAppEmpty::executeMenuAction()
{
	if (getMenu() != NULL)
	{
		// Execute app-specific menu actions here
		// ======================================
		//
		// ======================================
	}
}