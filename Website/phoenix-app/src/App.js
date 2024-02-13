import React, { useState } from 'react';
import './App.css';

// Import the Install component
import Banner from './components/Banner';
import Content from './components/Content';
import Footer from './components/Footer';
import AboutMe from './components/AboutMe';
import Install from './components/Install';
// import Account from './components/Account';

function App() {
  const [activePage, setActivePage] = useState('home'); // Default active page is 'home'

  const handlePageChange = (page) => {
    setActivePage(page);
  };

  // Page selection logic
  return (
    <div>
      <Banner
        activePage={activePage}
        setActivePage={setActivePage} // Pass setActivePage as a prop
      />
      {activePage === 'home' ? <Content /> : null}
      {/* {activePage === 'browse' ? <Browse /> : null} */}
      {activePage === 'about' ? <AboutMe /> : null}
      {activePage === 'install' ? <Install /> : null}
      {/* {activePage === 'account' ? <Account /> : null} */}
      {/* {activePage === 'account' ? <Account /> : <Content />} */}
      <Footer />
    </div>
  );
}

export default App;
