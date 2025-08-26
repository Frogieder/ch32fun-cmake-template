#include <ch32fun.h>

// Use a pin from port C only
#define LED_PIN PC1

int main()
{
    SystemInit();

    funGpioInitC();
    funPinMode(LED_PIN, GPIO_CNF_OUT_PP | GPIO_Speed_10MHz);

    // ReSharper disable once CppDFAEndlessLoop
    for (;;)
    {
		funDigitalWrite(LED_PIN, 1);
		Delay_Ms(500);
		funDigitalWrite(LED_PIN, 0);
		Delay_Ms(500);
	}
}
