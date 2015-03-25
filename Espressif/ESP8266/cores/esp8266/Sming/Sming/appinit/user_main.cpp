#include <user_config.h>
#include "../SmingCore/SmingCore.h"

extern void setup();
extern void loop();

Timer procTimer;

bool ok = false;
void onTimer()
{
	loop();
}


extern "C" void user_init(void)
{
	system_timer_reinit();
	cpp_core_initialize();
	spiffs_mount();
	System.initialize();
	
	setup();
	procTimer.initializeMs(0, onTimer).start();
}
