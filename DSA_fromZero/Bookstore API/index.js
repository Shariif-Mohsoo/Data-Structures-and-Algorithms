const express = require('express');
const bodyParser = require('body-parser');
const app = express();
app.use(bodyParser.json());

let books = {
  "12345": { title: "Book One", author: "Author A", reviews: {} },
  "67890": { title: "Book Two", author: "Author B", reviews: {} }
};

let users = []; // store registered users

// Task 1: Get all books
app.get('/books', (req, res) => {
  res.json(books);
});

// Task 2: Get book by ISBN
app.get('/books/isbn/:isbn', (req, res) => {
  let isbn = req.params.isbn;
  console.log(isbn);
  console.log(books[isbn])
  res.json(books[isbn]);
});

// Task 3: Get books by Author
app.get('/books/author/:author', (req, res) => {
  let author = req.params.author;
  let filtered = Object.values(books).filter(b => b.author === author);
  res.json(filtered);
});

// Task 4: Get books by Title
app.get('/books/title/:title', (req, res) => {
  let title = req.params.title;
  let filtered = Object.values(books).filter(b => b.title === title);
  res.json(filtered);
});

// Task 5: Get book reviews
app.get('/books/review/:isbn', (req, res) => {
  let isbn = req.params.isbn;
  res.json(books[isbn].reviews);
});

// Task 6: Register new user
app.post('/register', (req, res) => {
  let { username, password } = req.body;
  users.push({ username, password });
  res.json({ message: "User registered!" });
});

// Task 7: Login
app.post('/login', (req, res) => {
  let { username, password } = req.body;
  let user = users.find(u => u.username === username && u.password === password);
  if (user) res.json({ message: "Login successful!" });
  else res.json({ message: "Invalid credentials" });
});

// Task 8: Add/Modify review
app.put('/auth/review/:isbn', (req, res) => {
  let { username, review } = req.body;
  let isbn = req.params.isbn;
  books[isbn].reviews[username] = review;
  res.json({ message: "Review added/modified" });
});

// Task 9: Delete review
app.delete('/auth/review/:isbn', (req, res) => {
  let { username } = req.body;
  let isbn = req.params.isbn;
  delete books[isbn].reviews[username];
  res.json({ message: "Review deleted" });
});

app.listen(3000, () => console.log("Server running on port 3000"));
