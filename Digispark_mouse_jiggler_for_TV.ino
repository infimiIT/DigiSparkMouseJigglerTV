// InfimiIT source made by Przemyslaw Myk
// https://github.com/infimiIT
// Feel free to use
// Please remember that you can only use the solution if you do not violate any warranty or license terms



#include <DigiMouse.h>
void setup(){
  DigiMouse.begin();
}
 
void loop() {
  while(true) {
    DigiMouse.move(100,0,0); // 2px right
    DigiMouse.delay(10000);
  }
}