import React from "react";
import Comment from "./Comment";

const comments = [  // array변수, 그 아래 있는게 객체?
  {
    name: "이인제",
    comment: "안녕하세요, 소플입니다.",
    pic: "https://upload.wikimedia.org/wikipedia/commons/8/89/Portrait_Placeholder.png",
  },
  {
    name: "유재석",
    comment: "리액트 재미있어요~!",
    pic: "https://upload.wikimedia.org/wikipedia/commons/8/89/Portrait_Placeholder.png",
  },
  {
    name: "강민경",
    comment: "저도 리액트 배워 보고 싶어요!!",
    pic: "https://upload.wikimedia.org/wikipedia/commons/8/89/Portrait_Placeholder.png",
  },
];

function CommentList(props) {
  return (
    <div>
      {/* <Comment />
      <Comment name={"이인제"} comment={"안녕하세요, 소플입니다"} />
      <Comment name={"유재석"} comment={"리액트 재밌어요~"} />
      <Comment name={"강호동"} comment={"리액트"} /> */}
      {/* 파란 중괄호 안에서만 주석처리가 가능하고 js코드를 쓸 수 있다.? */}
      {comments.map((comment) => {
        // map함수가 comments에서 호출한다?
        return (
          <Comment name={comment.name} comment={comment.comment} pic={comment.pic} />
        );
      })}
    </div>
  );
}

export default CommentList;