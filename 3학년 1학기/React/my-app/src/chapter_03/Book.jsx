import React from "react";

function Book(props) {
  return (
    <div>
      {/* <h1>{`이 책의 이름은 ${props.name}입니다.`}</h1>
      <h2>{`이 책은 총 ${props.numOfPage}페이지로 이뤄져있습니다.`}</h2> */}
      <div style="">
        <img src={`${props.picurl}`}/>
      </div>
      <div>
        <h1>{`${props.name} : ${props.numOfPage}쪽 : ${props.price}원`}</h1>
      </div>
    </div>
  )
}

export default Book;