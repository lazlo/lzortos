#include "config.h"
#include "avr_timer.h"
#include "avr_usart.h"
#include "avr_spi.h"
#include "avr_i2c.h"
#include "avr_adc.h"

void chip_init(void)
{
	avr_timer1_init(CONFIG_TIMER1_TICK_MS);
	avr_usart_init();
	avr_spi_init();
#ifdef CONFIG_I2C
	avr_i2c_init();
#endif
#ifdef CONFIG_ADC
	avr_adc_init();
#endif
}
