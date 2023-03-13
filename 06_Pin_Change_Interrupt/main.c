#define F_CPU 16000000L
#include <avr/io.h>
#include <avr/interrupt.h>


ISR(PCINT2_vect)
{
	if(PIND & 0x01<<PIND2)
	{
		PORTB &= ~(0x01 << PORTB5);	
	}	
	else
	{
		PORTB |= 0x01 << PORTB5;	
	}
}

int main(void)
{
	DDRB |= 0x01 << DDB5;
	PORTD |= 0x01 << PORTD2;
	
	PCICR |= 0x01 << PCIE2;
	PCMSK2 |= 0x01 << PCINT18;
	sei();
	
    /* Replace with your application code */
    while (1) 
    {
	
    }
}

