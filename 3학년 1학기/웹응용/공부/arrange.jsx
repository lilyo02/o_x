/* 3주차 */
/*
// Book.jsx
import React from "react";

function Book(props) {
  return (
    <div>
      <h1>{`이 책의 이름은 ${props.name}입니다.`}</h1>
      <h1>{`이 책은 총 ${props.numOfPage}페이지로 이뤄져 있습니다.`}</h1>
    </div>
  );
}

export default Book;

// Library.jsx
import React from "react";
import Book from "./Book";

function Library(props) {
  return (
    <div>
      <Book name="처음 만난 파이썬" numOfPage={300} />
      <Book name="처음 만난 AWS" numOfPage={400} />
      <Book name="처음 만난 리액트" numOfPage={500} />
    </div>
  );
}

export defalut Library;

// index.js
import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import reportWebVitals from './reportWebVitals';

import Library from './chapter_03/Library';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    <Library />
  </React.StrictMode>
);
*/

const { Profiler } = require("react");

/* 4주차 */
// ConfirmDialog.jsx
/*
function Button(props) {
  return (
    <button className={`bg-${props.color}`}>
      <b>
        {props.children}
      </b>
    </button>
  )
}

function ConfirmDialog(props) {
  return (
    <div>
      <p>내용을 확인하셨으면 확인 버튼을 눌러주세요.</p>
      <Button color='green'>확인</Button>
    </div>
  )
}

// 잘 모르는 건 확장자 안씀
// Hello
const element = <h1>안녕, 리액트!</h1>;
ReactDOM.render(
  element,
  document.getElementById('root')
);

const element = <h1>안녕, 리액트!</h1>
const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(element);

// 시계?
function tick() {
  const element = (
    <div>
      <h1>안녕, 리액트!</h1>
      <h2>현재 시간 : {new Date().toLocaleTimeString()}</h2>
    </div>
  );

  const root = ReactDOM.createRoot(document.getElementById('root'));
  root.render(element);
}

setInterval(tick, 1000);

// Clock.jsx
import React from "react";

function Clock(props) {
  return (
    <div>
      <h1>안녕, 리액트!</h1>
      <h2>현재 시간 : {new Date().toLocaleTimeString()}</h2>
    </div>
  );
}

export default Clock;

// index.js
import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import reportWebVitals from './reportWebVitals';

import Library from './chapter_03/Library';
import Clock from './chapter_04/Clock';

const root = ReactDOM.createRoot(document.getElementById('root'));
setInterval(() => {
  root.render(
    <React.StrictMode>
      <Clock />
    </React.StrictMode>
  );
}, 1000);
*/

/* 5주차 */
/*
// App.jsx
function App(props) {
  return (
    <Profile
        name="소플"
        introduction="안녕하세요, 소플입니다."
        viewCount={1500}
    />
  );
}

function App(props) {
  return (
    <Layout
        width={2560}
        height={1440}
        header={
          <Header title="소플의 블로그입니다." />
        }
        footer={
          <Footer />
        }
    />
  );
}

class Welcome extends React.Component {
  render() {
    return <h1>안녕, {this.props.name}</h1>;
  }
}
*/

/* 6주차 */
function Welcome(props) {
  return <h1>Hello, {props.name}</h1>
}

function App(props) {
  return (
    <div>
      <Welcom name="Mike" />
      <Welcom name="Steve" />
      <Welcom name="Jane" />
    </div>
  )
}

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(<App />);

function Comment(props) {
  return (
    <div className="comment">
      <div className="user-info">
        <img className="avatar"
            src={props.author.avatarUrl}
            alt={props.author.name}
        />
        <div className="user-info-name">
          {props.author.name}
        </div>
      </div>

      <div className="comment-text">
        {props.text}
      </div>

      <div className="comment-date">
        {formatDate(props.date)}
      </div>
    </div>
  );
}

props = {
  author: {
    name : "소플",
    avatarUrl : "https://...",
  },
  text : "댓글입니다.",
  date : Date.now(),
}

function Avatar(props) {
  return (
    <img className="avatar"
        src={props.user.avatarUrl}
        alt={props.user.name}
    />
  );
}

function UserInfo(props) {
  return (
    <div className="user-info">
      <Avatar user={props.user} />
      <div className="user.info-name">
        {props.user.name}
      </div>
    </div>
  )
}

function UserInfo(props) {
  return (
    <div className="user-info">
      <Avatar user={props.user} />
      <div className="user.info-name">
        {props.user.name}
      </div>
    </div>
  );
}

// index.jsx
import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';

import Library from './chapter_03/Library';
import Clock from './chapter_04/Clock';
import CommentList from './chapter_05/CommentList';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    <CommentList />
  </React.StrictMode>
);
