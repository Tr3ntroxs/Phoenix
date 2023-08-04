import React, { useState } from 'react';
import '../Banner.css';
import logo from '../logo_clear.png';

const Banner = ({ aboutPage }) => {
  const [userAnswer, setUserAnswer] = useState('');
  const [allAnswers, setAllAnswers] = useState([]);
  const [activePage, setActivePage] = useState('home'); // Default active page is 'home'

  const handleUserAnswer = () => {
    // ... (your existing code to handle user answers)
  };

  const handlePageChange = (page) => {
    setActivePage(page);
  };

  // Render different submenus based on the activePage state
  let submenuContent;
  if (activePage === 'home') {
    submenuContent = (
      <ul>
        <li><a href="#">Home</a></li>
        <li><a href="#">Browse</a></li>
        <li><a href="#">Install</a></li>
        <li><a href="#" onClick={() => handlePageChange('about')}>About</a></li>
        <li><a href="#">Account</a></li>
      </ul>
    );
  } else if (activePage === 'about') {
    submenuContent = (
      <ul>
        <li><a href="#" onClick={() => handlePageChange('home')}>Home</a></li>
        <li><a href="#">Browse</a></li>
        <li><a href="#">Install</a></li>
        <li><a href="#">About</a></li>
        <li><a href="#">Account</a></li>
      </ul>
    );
  }

  return (
    <div className="banner">
      <div className="submenus">
        <img src={logo} className="logo" alt="" />
        {submenuContent}
        <div className="search">
          <input
            type="text"
            className="search-bar"
            placeholder="Got a question?"
            value={userAnswer}
            onChange={(e) => setUserAnswer(e.target.value)}
          />
          <button onClick={handleUserAnswer}>Submit</button>

          <button>
            <svg viewBox="0 0 24 24" fill="currentColor" height="1em" width="1em">
              {/* ... (SVG path data) ... */}
            </svg>
          </button>
        </div>
        <div className="night">
          <button>
            <svg fill="currentColor" viewBox="0 0 16 16" height="1em" width="1em">
              {/* ... (SVG path data) ... */}
            </svg>
          </button>
        </div>
      </div>
      {activePage === 'about' && aboutPage} {/* Render AboutMe component when activePage is 'about' */}
    </div>
  );
};

export default Banner;