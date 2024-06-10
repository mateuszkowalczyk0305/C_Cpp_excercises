// Implementacja maszyny stanów z użyciem instrukcji warunkowej switch–case.

// Implementacja stanów [tej z dwoma stanami]:

typedef enum State {
	LED_OFF, // S1
	LED_ON // S2
} State_t

State_t currentState = LED_OFF; // s. poczatkowy

while (true) 
{
	unsigned short nextBit = getNextBit();
	
	switch(currentState)
	{
		case LED_OFF:
		if(nextBit == 1)
		{
			turnOnLed();
			currentState = LED_ON;
		}
		break;
		case LED_ON:
		if (nextBit == 0)
		{
			turnOffLed();
			currentState = LED_OFF;
		}
		break;
	}
}
// Implementacja stanów [tej z trzema stanami]:

State_t currentState = LED_OFF;

while(true)
{
	unsigned short nextBit = getNextBit();
	switch(currentState)
	{
		case LED_OFF:
		if (nextBit == 1)
		{
			turnOnLed();
			currentState = LED_ON;
		}
		break;
		case LED_ON:
		if(nextBit == 0)
		{
			turnOffLed();
			currentState = LED_OFF;
		} else {
			turnOnSecondLed();
			currentState = SECOND_LED_ON;
		}
		break;
		case SECOND_LED_ON:
		if (nextBit == 0)
		{
			turn)ffSecondLed();
			currentState = LED+ON;
		}
		break;
	}
}

// UWAGI: Maszyny stanów z użyciem switch-case nie są wskazane w przypadku bardziej rozbudowanych programów.