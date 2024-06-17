#include "defines.h"

// BACKGROUND TILEMAP ARRAY ---------------------------------------------------------------------------------------------------------------------------------------//

int background[1200] = {
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s4, s4, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s4, s4, s4, s4, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s4, s4, s4, s4, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s4, s4, s4, s4, s4, s4, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s4, s4, s4, s4, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s4, s4, s4, s4, s4, s4, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0, s0,
	s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5,
	s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5,
	s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5,
	s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5,
	s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5,
	s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5, s5
};



