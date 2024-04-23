import React from "react";
import Task from "./Task";

const comments = [
  {
    content: ("민지는 추석을 맞아 오랜만에 시골에 내려갔습니다.\n고향은 시간이 흘러도 변함없이 여전했습니다.\n민지가 볼 수 있는 풍경으로 알맞지 않은 것은 무엇인가요?"),
    pic1: "./문제1.png",
    pic2: "./문제2.png",
    pic3: "./문제3.png",
    pic4: "./문제4.png",
  },
  {
    content: ("나래는 살을 빼기위해 수영장을 다니기로 했습니다. 나래가 챙겨야 할 준비물로 알맞지 않은 것은 무엇인가요?"),
    pic1: "./문제5.png",
    pic2: "./문제6.png",
    pic3: "./문제7.png",
    pic4: "./문제8.png",
  }
]

function Task_List(props) {
  return (
    <div>
      {comments.map((comment) => {
        return(
          <Task content= {comment.content} 
          pic1={comment.pic1}
          pic2={comment.pic2}
          pic3={comment.pic3} 
          pic4={comment.pic4}
          />
        );
      })}
    </div>
  );
}

export default Task_List;