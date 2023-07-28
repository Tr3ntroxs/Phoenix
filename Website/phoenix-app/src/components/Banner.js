import React from 'react';
import ReactDOM from 'react-dom';
import '../Banner.css';
import logo from '../logo_clear.png'; // Adjust the path based on the file structure
const Banner = () => {
  return (
    <div className="banner">
      <div className="submenus">
      <img src={logo} className="logo" alt="" />

        <ul>
          <li><a href="#">Home</a></li>
          <li><a href="#">Browse</a></li>
          <li><a href="#">Install</a></li>
          <li><a href="#">About</a></li>
          <li><a href="#">Account</a></li>
        </ul>
        <div className="search">
          <input type="text" className="search-bar" placeholder="Got a question?" />
          <button>
            <svg viewBox="0 0 24 24" fill="currentColor" height="1em" width="1em">
              <path fill="none" d="M0 0h24v24H0z" />
              <path d="M18.031 16.617l4.283 4.282-1.415 1.415-4.282-4.283A8.96 8.96 0 0111 20c-4.968 0-9-4.032-9-9s4.032-9 9-9 9 4.032 9 9a8.96 8.96 0 01-1.969 5.617zm-2.006-.742A6.977 6.977 0 0018 11c0-3.868-3.133-7-7-7-3.868 0-7 3.132-7 7 0 3.867 3.132 7 7 7a6.977 6.977 0 004.875-1.975l.15-.15zm-3.847-8.699a2 2 0 102.646 2.646 4 4 0 11-2.646-2.646z" />
            </svg>
          </button>
        </div>
        <div className="night">
          <button>
            <svg fill="currentColor" viewBox="0 0 16 16" height="1em" width="1em">
              <path d="M6 .278a.768.768 0 01.08.858 7.208 7.208 0 00-.878 3.46c0 4.021 3.278 7.277 7.318 7.277.527 0 1.04-.055 1.533-.16a.787.787 0 01.81.316.733.733 0 01-.031.893A8.349 8.349 0 018.344 16C3.734 16 0 12.286 0 7.71 0 4.266 2.114 1.312 5.124.06A.752.752 0 016 .278zM4.858 1.311A7.269 7.269 0 001.025 7.71c0 4.02 3.279 7.276 7.319 7.276a7.316 7.316 0 005.205-2.162c-.337.042-.68.063-1.029.063-4.61 0-8.343-3.714-8.343-8.29 0-1.167.242-2.278.681-3.286z" />
              <path d="M10.794 3.148a.217.217 0 01.412 0l.387 1.162c.173.518.579.924 1.097 1.097l1.162.387a.217.217 0 010 .412l-1.162.387a1.734 1.734 0 00-1.097 1.097l-.387 1.162a.217.217 0 01-.412 0l-.387-1.162A1.734 1.734 0 009.31 6.593l-1.162-.387a.217.217 0 010-.412l1.162-.387a1.734 1.734 0 001.097-1.097l.387-1.162zM13.863.099a.145.145 0 01.274 0l.258.774c.115.346.386.617.732.732l.774.258a.145.145 0 010 .274l-.774.258a1.156 1.156 0 00-.732.732l-.258.774a.145.145 0 01-.274 0l-.258-.774a1.156 1.156 0 00-.732-.732l-.774-.258a.145.145 0 010-.274l.774-.258c.346-.115.617-.386.732-.732L13.863.1z" />
            </svg>
          </button>
        </div>
      </div>
    </div>
  );
};

export default Banner;
