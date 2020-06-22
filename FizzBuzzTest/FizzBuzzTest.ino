#define WAIT_TIME           (500) // [ms]

int i = 1;
void setup() 
{
	Serial.begin(115200);
}

void loop() 
 {
  if(i<=100)
  {
    Serial.print(i,DEC); // output string (and line feed)
    	if(i% 15 == 0) {
        	Serial.print(":FizzBuzz\n"); // output string (and line feed)
        }
        else if(i % 5 == 0) {
        	Serial.print(":Fizz\n"); // output string (and line feed)
        }
        else if(i % 3 ==0) {
        	Serial.print(":Buzz\n"); // output string (and line feed)
        }
        else{
          Serial.print("\n"); // output string (and line feed)
        }
          delay(WAIT_TIME);
          i++;
  }
}
 
        
   
