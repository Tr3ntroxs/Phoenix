import React, { useState } from 'react';
import './App.css';

import Banner from './components/Banner';
import Content from './components/Content';
import Footer from './components/Footer';
import AboutMe from './components/AboutMe';
import Install from './components/Install'; // Import the Install component

function App() {
  const [activePage, setActivePage] = useState('home'); // Default active page is 'home'

  const handlePageChange = (page) => {
    setActivePage(page);
  };

  return (
    <div>
      <Banner
        aboutPage={<AboutMe />}
        installPage={<Install />}
        activePage={activePage}
        setActivePage={setActivePage} // Pass setActivePage as a prop
      />
      {activePage === 'about' ? <AboutMe /> : <Content />}
      <Footer />
    </div>
  );
}

export default App;
