#define WAIT_TIME           (500) // [ms]


int g_display_mode;
int g_count = 0;

void setup() 
{
	Serial.begin(115200);
}

void loop() 
 {
  int i = 0;
  for(i=0;i<100;i++){
    	if(i% 15 == 0 ) {
        	Serial.print("FizzBuzz\n"); // output string (and line feed)
        }
        else if(i % 5 == 0) {
        	Serial.print("Fizz\n"); // output string (and line feed)
        }
        else if(i % 3 ==0) {
        	Serial.print("Buzz\n"); // output string (and line feed)
        }
        else{
          Serial.print(i,DEC); // output string (and line feed)
          Serial.print("\n"); // output string (and line feed)
        }
          delay(WAIT_TIME);
  }
  }
        
   
