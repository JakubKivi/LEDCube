#define builtLED 	(1<<PB0)
#define builtLED_ON	PORTB |= builtLED
#define builtLED_OFF	PORTB &= ~builtLED
#define builtLED_TOG	PORTB ^= builtLED

#define lvl1 	(1<<PD0)
#define lvl1ON	PORTD |= lvl1
#define lvl1OFF	PORTD &= ~lvl1
#define lvl1TOG	PORTD ^= lvl1

#define lvl2 	(1<<PD1)
#define lvl2ON	PORTD |= lvl2
#define lvl2OFF	PORTD &= ~lvl2
#define lvl2TOG	PORTD ^= lvl2

#define lvl3 	(1<<PD2)
#define lvl3ON	PORTD |= lvl3
#define lvl3OFF	PORTD &= ~lvl3
#define lvl3TOG	PORTD ^= lvl3

#define lvl4 	(1<<PD3)
#define lvl4ON	PORTD |= lvl4
#define lvl4OFF	PORTD &= ~lvl4
#define lvl4TOG	PORTD ^= lvl4

#define lvl5 	(1<<PC0)
#define lvl5ON	PORTC |= lvl5
#define lvl5OFF	PORTC &= ~lvl5
#define lvl5TOG	PORTC ^= lvl5

#define lvl6 	(1<<PC1)
#define lvl6ON	PORTC |= lvl6
#define lvl6OFF	PORTC &= ~lvl6
#define lvl6TOG	PORTC ^= lvl6

#define lvl7 	(1<<PC2)
#define lvl7ON	PORTC |= lvl7
#define lvl7OFF	PORTC &= ~lvl7
#define lvl7TOG	PORTC ^= lvl7

#define lvl8 	(1<<PC3)
#define lvl8ON	PORTC |= lvl8
#define lvl8OFF	PORTC &= ~lvl8
#define lvl8TOG	PORTC ^= lvl8
