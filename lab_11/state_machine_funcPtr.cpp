// Implementacja maszyny stanów z użyciem wskaźników funkcyjnych i struktur.


// Deskryptory stanów i zdarzeń:

typedef enum StateDescriptor
{
	DEACTIVATED,
	ACTIVATED,
	ALARM
} StateDescriptor_t;

typedef enum EventDescriptor
{
	BUTTON_PRESSED,
	DETECTED
} EventDescriptor_t;

// Struktura reprezentująca stan maszyny:

typedef StateDescriptor_t (*EventHandler)();

typedef struct State
{
	StateDescriptor_t stateDescriptor;
	EventDescriptor_t ecentDescriptor;
	EventHandler handler;
} State_t;

// Funkcje obsługi zdarzeń dla poszczególnych stanów:

StateDescriptor_t idleDeactivated()
{
	return DEACTIVATED;
}

StateDescriptor_t activate()
{
	return ACTIVATED;
}

StateDescriptor_t deactivate()
{
	turnOffBuzzer();
	return DEACTIVATED;
}

StateDescriptor_t raiseAlarm()
{
	turnOnBuzzer;
	return ALARM;
}

StateDescriptor_t idleAlarm()
{
	return ALARM;
}

// Funkcja realizująca maszyne stanów:

void handleEvent (EventDescriptor_t event)
{
	static const State_t stateMachine[] = 
	{
		{DEACTIVATED, BUTTON_PRESSED, activate},
		{DEACTIVATED, DETECTED, idleDeactivated},
		{ACTIVATED, BUTTON_PRESSED, deactivate},
		{ACTIVATED, DETECTED, raiseAlarm},
		{ALARM, BUTTON_PRESSED, deactivate},
		{ALARM, DETECTED, idleAlarm}
	};
	
	static StateDescriptor_t currentState = DEACTIVATED;
	
	for (unsigned int i = 0; i < sizeof(stateMachine)/sizeof(State_t); ++i)
	{
		if (stateMachine[i].stateDescriptor == currentState && stateMachine[i].eventDescriptor == event)
		{
			currentState = stateMachine[i].handler();
			break;
		}
	}
	
}