import React from 'react';
import '../Content.css';
import arduino from '../arduino.jpg';
import cad from '../CAD_example.png';
import sensor from '../sensor.jpg';
import ImageSlider from './Slider';

const Content = ({ activePage }) => {
  const SliderData = [
    { image: arduino, caption: "Powered by Arduino" },
    { image: cad, caption: "How OnShape was Utilized" },
    { image: sensor, caption: "How does a Piezoelectric Sensor work?" },
  ];

  return (
    <div className="content">
      <div>
        <h1>{activePage === 'home' ? 'Second Chances' : 'About Phoenix Bionics'}</h1>
        <p>
          {activePage === 'home'
            ? 'Powered by Arduino ELEGOO and designed through Onshape, Phoenix will lend more than just a hand...'
            : 'Our mission is to make sure that prosthetics are affordable for everyone!'}
        </p>
      </div>

      <div>
        <ImageSlider slides={SliderData} />
      </div>
    </div>
  );
};

export default Content;
