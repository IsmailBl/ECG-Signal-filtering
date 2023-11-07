const int LOminus = 5;
const int LOplus  = 6; 
const int Output  = A0;
const int numReadings = 10; // Number of readings to average
int sensorValues[numReadings]; // Array to store sensor values
int index = 0; // Index for sensorValues
int total = 0; // Total sum of sensor values
int sensorVal = 0; // Filtered sensor value

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  pinMode(LOminus, INPUT); // Setup for leads off detection LO +
  pinMode(LOplus, INPUT); // Setup for leads off detection LO -
  pinMode(Output, INPUT); // Setup for Output detection
}

void loop() {
  // Read from the AD8232 output
  sensorVal = analogRead(Output);

  // Implement a simple moving average filter
  total = total - sensorValues[index];
  sensorValues[index] = sensorVal;
  total = total + sensorValues[index];
  index = (index + 1) % numReadings;
  int filteredSensorVal = total / numReadings;

  // Print the raw and filtered sensor values
  Serial.print("Raw Sensor Value: ");
  Serial.print(sensorVal);
  Serial.print(" | Filtered Sensor Value: ");
  Serial.println(filteredSensorVal);

  // Visualize the data on the serial plotter
  Serial.print(filteredSensorVal); 
  Serial.print(",");

  // Add a slight delay for stability
  delay(100);
}
