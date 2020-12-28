/*
  Transmit path for for Morse machine
*/

String inString = "";

void setup() {
  // start serial port at 9600 bps and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() {
  // Wait until serial input is sent
  if (Serial.available() > 0) {
    // get incoming input and place into String
    // todo: decide if remove newline character to allow morse translation
    inString = Serial.readString();
    //Using Serial.print instead of Serial.println so extra newline isn't introduced
    Serial.print(inString);
  }
}
