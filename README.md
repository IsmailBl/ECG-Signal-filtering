# AD8232 Sensor Data Reader for Arduino

This Arduino sketch is designed to read data from the AD8232 analog sensor, commonly used for measuring biopotential signals such as ECG. The code includes functionality for signal filtering using a simple moving average filter to reduce noise in the sensor readings.

## Getting Started

### Prerequisites

- Arduino Uno or compatible board
- AD8232 analog sensor
- Arduino IDE

### Installing

1. Connect the AD8232 sensor to the Arduino board.
2. Open the `AD8232_Sensor_Data_Reader.ino` file in the Arduino IDE.
3. Upload the sketch to the Arduino board.

## Usage

- Ensure that the connections to the AD8232 sensor and the Arduino board are properly set up.
- Monitor the raw and filtered sensor values on the serial monitor in the Arduino IDE.

## Customization

- Adjust the parameters of the moving average filter and the delay based on your specific requirements.
- Customize the code to incorporate additional functionalities as needed.

## Visualization

Data visualization can be achieved using the Android app developed for this purpose. Refer to the [Android App Repository](https://github.com/yourandroidapprepository) for more details on visualization and data analysis.

## Authors

- [Ismail Boulahnine](https://github.com/IsmailBl)

## License

This project is licensed under the [MIT License](LICENSE) - see the [LICENSE](LICENSE) file for details.
