import React from 'react';
import '../Footer.css';

const Footer = () => {
  return (
    <div className="footer">
      <div className="footer-content">
        <div className="footer-item">
          <h3>Support</h3>
          <div className="footer-col">
            <ul>
              <li><a href="#">Contact Us</a></li>
              <li><a href="#">Give Feedback</a></li>
              <li><a href="#">Troubleshooting</a></li>
              <li><a href="#">Email: maffet@rpi.edu</a></li>
            </ul>
          </div>
        </div>
        <div className="footer-item">
          <h3>About Us</h3>
          <div className="footer-col">
            <ul>
              <li><a href="#">Our Project</a></li>
              <li><a href="#">Team Members</a></li>
              <li><a href="#">FAQ</a></li>
            </ul>
          </div>
        </div>
        <div className="footer-item">
          <h3>Socials</h3>
          <div className="footer-col">
            <ul>
            <li><a href="https://github.com/Tr3ntroxs/HandiCraft">
              Github
            </a></li>
            <li><a href="https://cad.onshape.com/documents/96d875bf46dff56dd5444c32/w/6ed33167ab82f3a660f521c9/e/e5734e374defbcc0d33a5eee">
              Onshape
            </a></li>
            </ul>
          </div>
        </div>
      </div>
    </div>
  );
};

export default Footer;
