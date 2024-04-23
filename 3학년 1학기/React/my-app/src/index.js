import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';

import Library from './chapter_03/Library';
import BookStore from './chapter_03/BookStore';
import ConfirmDialog from './chapter_04/ConfirmDialog';

import Clock from './chapter_04/Clock';
import WorldClock from './chapter_05/WorldClock';
import CommentList from './chapter_05/CommentList';

import Task_List from './chapter_06/Task_List';

// * BookStore
// const root = ReactDOM.createRoot(document.getElementById('root'));

// const confirmdlg = <ConfirmDialog/>
// root.render(
//   <React.StrictMode>
//     <App/>
//     {/* {confirmdlg} */}
//     {/* <BookStore /> */}
//   </React.StrictMode>
// );

// const domroot = document.getElementById('root');
// console.log('{');
// for (let keyname in domroot) {
//   console.log(`\t ${keyname} : ${domroot[keyname]}`);
// }
// *

const root = ReactDOM.createRoot(document.getElementById('root'));

setInterval(() => {
  root.render(
    <React.StrictMode>
      <Task_List/>
      {/* <Clock alarm = {new Date(2024, 3, 3, 15, 50, 0, 0)}/> */}
    </React.StrictMode>
  );
}, 1000);

// class Hello extends React.Component {
//   render() {
//     const element = <div>Hello {this.props.toWhat}</div>;
//     // Hello 대신 {this.props.lang === "ko"?"안녕하세요" : "Hello"} 이거 넣으면 lang에 따라 나오는게 달라짐
//     // -> React.createElement('div', null, 'Hello ${this.props.toWhat}'); = 오브젝트 형태로 JSX를 사용하지 않은 코드고, 위 코드는 JSX를 사용한 코드
//     return element; 
//     // jsx 표기방법
//   }
// }

// const root = ReactDOM.createRoot(document.getElementById('root'));
// const hello_element = <Hello toWhat="홍길동" lang="ko"/>;
// console.log(hello_element)
// root.render(hello_element);
// // 보여주라~..

// function formatName(user) {
//   return user.firstName + ' ' + user.lastName;
// }
// const user = {
//   firstName:'Gildong',
//   lastName: 'Hong',
//   avatarUrl: '',
// };
// const element = (
//   <h1>
//     Hello,{formatName(user)}
//     <img src={user.avatarUrl}/>
//   </h1>
// );
// const root = ReactDOM.createRoot(document.getElementById('root'));
// root.render(element);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();