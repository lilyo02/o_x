import React from "react";
import Book from "./Book";
//import Book from "./Book";

import pyImg from "./assets/처음 만난 파이썬.jpeg";
import awsImg from "./assets/처음 만난 AWS.jpg";
import reImg from "./assets/처음 만난 리액트.jpeg";

function BookStore(props) {
  const element =
  (<div style={{ display: "inline-grid" }}>
    <div style={{ display: "inline-flex" }}>
      <img src={pyImg} alt="파이썬 책 사진"/>
      <Book name="처음 만난 파이썬" numOfPage={300} price={30000} />
    </div>
    <div style={{ display: "inline-flex" }}>
      <img src={awsImg} alt="aws 책 사진" style={{size:"15px"}}/>
      <Book name="처음 만난 AWS" numOfPage={400} price={27000}/>
    </div>
    <div style={{ display: "inline-flex" }}>
      <img src={reImg} alt="리액트 책 사진"/>
      <Book name="처음 만난 리액트" numOfPage={500} price={28000}/>
    </div>
  </div>);
  console.log(element);
  return (element);
}

export default BookStore;