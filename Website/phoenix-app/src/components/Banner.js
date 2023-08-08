import React, { useState } from 'react';
import '../Banner.css';
import logo from '../logo_clear.png';

const Banner = ({ aboutPage, installPage, activePage, setActivePage }) => {
  const [userAnswer, setUserAnswer] = useState('');
  const [allAnswers, setAllAnswers] = useState([]);

  const handleUserAnswer = () => {
    if (userAnswer.trim() !== '') {
      fetch('http://localhost:3001/api/answers', {
        method: 'POST',
        headers: {
          'Content-Type': 'application/json',
        },
        body: JSON.stringify({ answer: userAnswer }),
      })
        .then((response) => {
          if (!response.ok) {
            throw new Error('Network response was not ok.');
          }
          return response.json();
        })
        .then((data) => {
          console.log(data); // Optional: Log the response from the backend
          setAllAnswers((prevAnswers) => [...prevAnswers, userAnswer]);
          setUserAnswer('');
        })
        .catch((error) => {
          console.error('Error:', error.message);
        });
    } else {
      console.log('Error: Answer cannot be empty.');
    }
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
        <li><a href="#" onClick={() => handlePageChange('install')}>Install</a></li>
        <li><a href="#" onClick={() => handlePageChange('about')}>About</a></li>
        <li><a href="#">Account</a></li>
      </ul>
    );
  } else if (activePage === 'about') {
    submenuContent = (
      <ul>
        <li><a href="#" onClick={() => handlePageChange('home')}>Home</a></li>
        <li><a href="#">Browse</a></li>
        <li><a href="#" onClick={() => handlePageChange('install')}>Install</a></li>
        <li><a href="#">About</a></li>
        <li><a href="#">Account</a></li>
      </ul>
    );
  } else if (activePage === 'install') {
    submenuContent = (
      <ul>
        <li><a href="#" onClick={() => handlePageChange('home')}>Home</a></li>
        <li><a href="#">Browse</a></li>
        <li><a href="#">Install</a></li>
        <li><a href="#" onClick={() => handlePageChange('about')}>About</a></li>
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
      {activePage === 'about' && aboutPage}
      {activePage === 'install' && installPage} {/* Render Install component when activePage is 'install' */}
    </div>
  );
};

export default Banner;
