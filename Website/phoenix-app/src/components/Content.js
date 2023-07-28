import React from 'react';
import '../Content.css';
import arduino from '../arduino.jpg'
import cad from '../CAD_example.png'
import sensor from '../sensor.jpg'

const Content = () => {
  return (
    <div className="content">
      <div>
        <h1>Second Chances</h1>
        <p>Powered by Arduino ELEGOO and designed through Onshape, <br /> Phoenix will lend more than just a hand...</p>
      </div>
    
      <div className="slider-frame">
        <div class="slide-images">
          <div class="img-container s1">
            <h2>Powered by Arduino</h2>
            <img src={arduino} alt={"arduino"} />
          </div>
          <div class="img-container s2">
            <h2>How OnShape was Utilized</h2>
            <img src={cad} alt={"CAD"} />
          </div>
          <div class="img-container s3">
            <h2>How does a Piezoelectric Sensor work?</h2>
            <img src={sensor} alt={"sensor"} />
          </div>
        </div>
      </div>
    </div>
  );
};

export default Content;
