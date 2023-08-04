import React from 'react';
import '../Content.css';
import arduino from '../arduino.jpg'
import cad from '../CAD_example.png'
import sensor from '../sensor.jpg'
import ImageSlider from './Slider';

const Content = () => {
  const SliderData = [
    {image: arduino, caption: "Powered by Arduino"}, 
    {image: cad, caption: "How OnShape was Utilized"}, 
    {image: sensor, caption: "How does a Piezoelectric Sensor work?"},
  ];
  return (
    <div className="content">
      <div>
        <h1>Second Chances</h1>
        <p>Powered by Arduino ELEGOO and designed through Onshape, <br /> Phoenix will lend more than just a hand...</p>
      </div>

      <div>
        <ImageSlider slides={SliderData}/>
      </div>
    </div>
  );
};

export default Content;
