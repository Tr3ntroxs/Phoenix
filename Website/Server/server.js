const express = require('express');
const cors = require('cors');
const bodyParser = require('body-parser');
const app = express();
const port = 3001;

// Middleware
app.use(cors());
app.use(bodyParser.json());

// Array to store user answers
const allAnswers = [];

// Endpoint to handle storing user answers
app.post('/api/answers', (req, res) => {
  const { answer } = req.body;
  if (answer) {
    allAnswers.push(answer);
    res.status(201).json({ message: 'Answer stored successfully.' });
  } else {
    res.status(400).json({ message: 'Bad Request. Answer not provided.' });
  }
});

// Endpoint to retrieve all answers
app.get('/api/answers', (req, res) => {
  res.json(allAnswers);
});

// Endpoint to display all answers in the terminal
app.get('/api/displayAnswers', (req, res) => {
  console.log('All Answers:');
  allAnswers.forEach((answer, index) => {
    console.log(`${index + 1}. ${answer}`);
  });
  res.json({ message: 'Answers displayed in the terminal.' });
});

// Start the server
app.listen(port, () => {
  console.log(`Server is running on http://localhost:${port}`);
});
