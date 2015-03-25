#include <user_config.h>
#include "../SmingCore/SmingCore.h"

extern void setup();
extern void loop();

extern "C" void user_init(void)
{
	system_timer_reinit();
	cpp_core_initialize();
	spiffs_mount();
	System.initialize();
	
	setup();
	while (1) loop();
}
