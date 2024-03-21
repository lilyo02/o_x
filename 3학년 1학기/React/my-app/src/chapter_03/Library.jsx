import React from "react";
import BookStore from "./BookStore";
//import Book from "./Book";

function Library(props) {
  const element =
  (<div>
      <BookStore name="처음 만난 파이썬" numOfPage={300} price={30000} />
      <BookStore name="처음 만난 AWS" numOfPage={400} price={27000} />
      <BookStore name="처음 만난 리액트" numOfPage={500} price={28000} />
  </div>);
  console.log(element);
  return (element);
}

// function Library(props) {
//   return (
//     <div>
//       <Book name="처음 만난 파이썬" numOfPage={300} />
//       <Book name="처음 만난 AWS" numOfPage={400} />
//       <Book name="처음 만난 리액트" numOfPage={500} />
//     </div>
//   );
// }

export default Library;