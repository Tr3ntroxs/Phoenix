import React, { useState } from 'react';
import './App.css';

import Banner from './components/Banner';
import Content from './components/Content';
import Footer from './components/Footer';
import AboutMe from './components/AboutMe';

function App() {
  const [activePage, setActivePage] = useState('home'); // Default active page is 'home'

  const handlePageChange = (page) => {
    setActivePage(page);
  };

  return (
    <div>
      <Banner aboutPage={<AboutMe />} onPageChange={handlePageChange} />
      {activePage === 'about' ? <AboutMe /> : <Content />}
      <Footer />
    </div>
  );
}

export default App;
