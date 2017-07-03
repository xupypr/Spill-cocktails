byte sensorAlcInterrupt  = 0;
byte sensorAlcPin        = 2;
byte sensorFlowInterrupt = 1;
byte sensorFlowPin       = 3;
byte alcoholPin          = 5;
byte flowPin             = 6;

float impulsePerMl = 5.00;

volatile unsigned long alcCount, flowCount;

unsigned long oldTime;

void setup()
{

  Serial.begin(9600);
  //alcohol pin
  pinMode(sensorAlcPin, INPUT);
  digitalWrite(sensorAlcPin, HIGH);
  //flow pin
  pinMode(sensorFlowPin, INPUT);
  digitalWrite(sensorFlowPin, HIGH);
  
  attachInterrupt(sensorAlcInterrupt, alcCounter, FALLING);
  attachInterrupt(sensorFlowInterrupt, flowCounter, FALLING);
}

void loop()
{
  
}

void alcCounter()
{
  alcCount++;
}

void flowCounter()
{
  flowCount++;  
}
