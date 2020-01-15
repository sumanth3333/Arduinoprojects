int sensor_pin = A0; //connect sensor a0 pin to arduino a0  
int output_value ;
float percentage;
int GLED = 13; //connect Green LED to pin 13
int RLED =12; //connect Red LED TO pin 12
int SENSE=0;
int value=0;
void setup() {

   Serial.begin(9600);
   pinMode(GLED, OUTPUT);
   pinMode(RLED, OUTPUT);
   Serial.println("Reading From the Sensor ...");

   delay(1000);
   }

void loop() {

   output_value= analogRead(sensor_pin);
     
   percentage = ( 100 - ( (output_value/1024.00) * 100 ) );
  
   Serial.print("Mositure : ");

   Serial.print(percentage); //displays in serial monitor

   Serial.println("%");
   if(percentage>50)
   {
    digitalWrite(GLED, HIGH);
   }
   else
   {
    digitalWrite(RLED, HIGH);
   }
   delay(1000);
   digitalWrite(GLED, LOW);
   digitalWrite(RLED, LOW);
   }
