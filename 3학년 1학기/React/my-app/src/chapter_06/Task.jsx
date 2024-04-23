import React from "react";

const style = {
  quiz: {
    border: "1px black solid",
    margin: 50,
    padding: 50,
  },
  horizon: {
    display: "inline-block",
  },
};

function Task(props) {
  return (
    <div style={style.quiz}>
      <div style={{ padding: "20px" }}>
        <h3>다음 지문을 읽고 문제를 풀어보세요(1~2)</h3>
        <ol>
          <li>
            <div>
              <span>{props.content}</span>
              <div>
                <div style={style.horizon}>
                  <div>&#9312;</div>
                  <img src={props.pic1} />
                </div>
                <div style={style.horizon}>
                  <div>&#9313;</div>
                  <img src={props.pic2} />
                </div>
                <div style={style.horizon}>
                  <div>&#9314;</div>
                  <img src={props.pic3} />
                </div>
                <div style={style.horizon}>
                  <div>&#9315;</div>
                  <img src={props.pic4} />
                </div>
              </div>
            </div>
          </li>
        </ol>
      </div>
    </div>
  );
}

export default Task;
