const axios = require('axios');

// Task 10: Get all books (async callback style)
async function getBooks() {
  try {
    const res = await axios.get('http://localhost:3000/books');
    console.log(res.data);
  } catch (err) {
    console.error(err);
  }
}

// Task 11: Search by ISBN (Promises style)
function getBookByISBN(isbn) {
  axios.get(`http://localhost:3000/books/isbn/${isbn}`)
    .then(res => console.log(res.data))
    .catch(err => console.error(err));
}

// Task 12: Search by Author
async function getBooksByAuthor(author) {
  let res = await axios.get(`http://localhost:3000/books/author/${author}`);
  console.log(res.data);
}

// Task 13: Search by Title
async function getBooksByTitle(title) {
  let res = await axios.get(`http://localhost:3000/books/title/${title}`);
  console.log(res.data);
}

getBooks();
getBookByISBN("12345");
getBooksByAuthor("Author A");
getBooksByTitle("Book One");
