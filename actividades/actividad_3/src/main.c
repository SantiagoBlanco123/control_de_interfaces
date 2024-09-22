#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
*/
int main(void) {
	stdio_init_all();
	sleep_ms(1000);
	gpio_init(6);
	gpio_init(7);
	gpio_init(8);
	gpio_init(20);
	gpio_init(21);
	gpio_init(22);
	gpio_set_dir(6,true);
	gpio_set_dir(7,true);
	gpio_set_dir(8,true);
	gpio_set_dir(20,false);
	gpio_set_dir(21,false);
	gpio_set_dir(22,false);
	while (true) {
		if(gpio_get(20)==false){
			gpio_put(6,true);
		}
		else{
			gpio_put(6,false);
		}
		if(gpio_get(21)==false){
			(gpio_get(7)==false);
			gpio_put(7,true);
			if(gpio_get(21)==false _AND gpio_get(7)==true){
			gpio_put(7,false);
		}
		}
		if(gpio_get(22)==false){
			gpio_put(8,true);
			sleep_ms(500);
			gpio_put(8,false);
			sleep_ms(500);
			if(gpio_get(21)==true _AND gpio_get(8)==true){
				gpio_put(8,true);
			}
			if(gpio_get(21)==true _AND gpio_get(8)==false){
				gpio_put(8,false);
			}
		}
	}
	return 0;
}
