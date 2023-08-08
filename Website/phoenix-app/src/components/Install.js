import React from 'react';

const Install = () => {
  return (
    <div className="install-page">
      <h1>Arduino Documentation</h1>

      <div className="section">
        <h2>Introduction</h2>
        <p>
          Arduino is a popular open-source electronics platform used for creating interactive projects.
          It combines hardware and software components to control and interact with electronic devices and sensors.
          Arduino boards are widely used by hobbyists and makers due to their simplicity, versatility, and affordability.
        </p>
      </div>

      <div className="section">
        <h2>Getting Started</h2>
        <ul>
          <li>Download and install the Arduino IDE from the official Arduino website.</li>
          <li>Connect your Arduino board to your computer using a USB cable.</li>
          <li>Launch the Arduino IDE and select the appropriate board and port.</li>
          <li>Write your code in the IDE's editor.</li>
          <li>Click "Upload" to compile and upload the code to the Arduino board.</li>
          <li>Observe the results as the board executes the uploaded code.</li>
        </ul>
      </div>

      <div className="section">
        <h2>Key Concepts</h2>
        <ul>
          <li>Digital I/O: Arduino boards have pins for digital input and output operations.</li>
          <li>Analog I/O: Arduino boards can read voltage values from analog sensors.</li>
          <li>PWM: Some pins support Pulse Width Modulation for simulating analog output.</li>
          <li>Libraries: Arduino provides libraries with pre-written code for various functionalities and components.</li>
        </ul>
      </div>

      <div className="section">
        <h2>Troubleshooting</h2>
        <ul>
          <li>Ensure the correct board and port are selected.</li>
          <li>Check your connections and wiring.</li>
          <li>Verify that required libraries are installed.</li>
          <li>Double-check your code for errors or typos.</li>
          <li>Restart the Arduino IDE or your computer if needed.</li>
        </ul>
      </div>

      <div className="section">
        <h2>Resources</h2>
        <ul>
          <li>Official Arduino website: <a href="https://www.arduino.cc/">https://www.arduino.cc/</a></li>
          <li>Arduino Reference: <a href="https://www.arduino.cc/reference/en/">https://www.arduino.cc/reference/en/</a></li>
          <li>Arduino Forum: <a href="https://forum.arduino.cc/">https://forum.arduino.cc/</a></li>
          <li>Arduino Project Hub: <a href="https://create.arduino.cc/projecthub">https://create.arduino.cc/projecthub</a></li>
          <li>Instructables Arduino Section: <a href="https://www.instructables.com/circuits/arduino/">https://www.instructables.com/circuits/arduino/</a></li>
          <li>GitHub Arduino Repository: <a href="https://github.com/arduino">https://github.com/arduino</a></li>
        </ul>
      </div>

      <p>Remember to have fun exploring and experimenting with Arduino to create exciting projects!</p>
    </div>
  );
};

export default Install;
