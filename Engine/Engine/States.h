// States.h is the interface for the Finite state machine of the
// application.

// Header guards
#ifndef _STATES_H_
#define _STATES_H_

class States
{
public:
	// constructor/destructor
	States();
	States(const States&);
	~States();

	// FINITE STATE MACHINE
	enum GAMESTATES
	{
		RUNNING,
		MAINMENU,
		PLAYER_PLAYING,
		EXIT,

	};

	int STATES;
};

#endif