#include "main.hpp"

using namespace picosystem;

void init() {
}

void update(uint32_t tick) {
}

void draw(uint32_t tick) {
	// Fill the background with black
	pen(0, 0, 0);
	clear();
	
	// Draw a white rectangle across the top of the screen
	pen(15, 15, 15);
	frect(0, 0, 120, 11);

	// Draw some white text in the top-left corner
	pen(0, 0, 0)
	text("Hello PicoSystem!", 2, 2);
}