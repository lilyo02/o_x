import React from "react";

const styles = {
  wrapper: { // wrapper에 있는 키값? 회색의 큰 둥근 사각형
    margin: 8,
    padding: 8,
    display: "flex",          // 가득 채우기..
    flexDirection: "row",     // 수평으로 배치
    border: "1px solid grey", // 회색 테두리
    borderRadius: 16,         // 모서리가 둥근 이유
  },
  imageContainer: {},
  image: {
    width: 50,
    height: 50,
    borderRadius: 25,    // 모서리 부분을 잘라서 원으로
  },
  contentContainer: {
    marginLeft: 8,            // 왼쪽 부분 조금 띄어쓰기
    display: "flex", 
    flexDirection: "column",  // 수직으로 배치, 안써도 무방
    justifyContent: "center", // 들어가는 내용을 중간에 쓰기
  },
  nameText : { // contentContainer 안에 타이틀
    color: "black",
    fontSize: 15,
    fontWeight: "bold", 
  },
  commentText: { // contentContainer 안에 내용
    color: "black",
    fontSize: 14,
  },
};

function Comment(props) {
  return (
    // <div>
    //   <h1>제가 만든 첫 컴포넌트입니다.</h1>
    // </div>
    <div style={styles.wrapper}>
      <div style={styles.imageContainer}>
        <img
            // src="https://upload.wikimedia.org/wikipedia/commons/8/89/Portrait_Placeholder.png"
            src={props.pic}
            style={styles.image}
        />
      </div>
      <div style={styles.contentContainer}>
        <span style={styles.nameText}>{props.name}</span>
        <span style={styles.commentText}>{props.comment}</span>
      </div>
    </div>
  );
}

export default Comment;

// function Comment(props) {
//   return (
//     <div className="comment">
//       <div className="user-info">
//         <img className="avatar"
//             src={props.author.avatarUrl}
//             alt={props.author.name}
//         />
//         <div className="user-info-name">
//           {props.author.name}
//         </div>
//       </div>
//       <div className="comment-text">
//         {props.text}
//       </div>
//       <div className="comment-date">
//         {formatDate(props.date)}
//       </div>
//     </div>
//   );
// }

// props = {
//   author: {
//     name: "소플",
//     avatarUrl: "https://..."
//   }
// }

// 여기서 추출된 Avatar component
// function Avatar(props) {
//   return (
//     <img className="avatar"
//         src={props.user.avatarUrl}
//         alt={props.user.name}
//     />
//   );
// }

// 그리고 호출할 때 Avatar component가 들어가려면
// 해당 자리에 <Avatar user={props.author} />이든
// author을 user로 바꿔서 쓸 수 있다??

// Componenet 컴포넌트 > UserInfo 컴포넌트 > Avatar 컴포넌트