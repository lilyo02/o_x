// rsc하면 바로 나오게 Reactjs code snippets 깔았음
import React from 'react';

// const zoneMap = {
//   London: {
//     name :
//   }
// }

const Clock = (props) => {
  switch (props.zone) {
    case "NewYork" :
      return (<h2> {"NewYork"} 시간 : {new Date().toLocaleTimeString("ko-kr",{timeZone : "America/New_York"})}</h2>);
    case "Seoul" :
      return (<h2> {"Seoul"} 시간 : {new Date().toLocaleTimeString("ko-kr",{timeZone : "Asia/Seoul"})}</h2>);
    case "London" :
      return (<h2> {"London"} 시간 : {new Date().toLocaleTimeString("ko-kr",{timeZone : "Europe/London"})}</h2>);
  }
}

// const Clock = (props) => {
//   return(

//   )
// }


export default Clock;

// class Clock extends React.Component {
//   render() {
//     // const alarm = this.props.alarm
//     // const alarm_end = new Date(Number(alarm) + 10*1000);
//     // const now = new Date()
       
//     // // console.log(alarm.toLocaleDateString()>now.toLocaleDateString());
//     // const show = alarm.toLocaleTimeString() <= now.toLocaleTimeString() && now.toLocaleTimeString <= alarm.toLocaleTimeString()
//     return (
//        <div>
//         {/* <h1>알람 시간 : {alarm.toLocaleDateString()} {alarm.toLocaleTimeString()}</h1>
//         <h2>현재 시간 : {now.toLocaleTimeString()}</h2>
//           {show?<h1>알람시간입니다</h1>:null} */}
//        </div>
//       )
//   }
// }

// 


// const Clock = (props) => {
//   const alarm = props.alarm
//   const alarm_end = alarm + 10*1000;
//   const now = new Date()
   
//   //console.log(alarm.toLocaleDateString()>now.toLocaleDateString());
//   const show = alarm.toLocaleTimeString() <= now.toLocaleTimeString() && now.toLocaleTimeString;
//   return (
//     <div>
//       <h1>알람 시간 : 2024. 4. 3</h1>
//       <h2>현재 시간 : {new Date().toLocaleTimeString()}</h2>
//       {show?<h1>알람시간입니다</h1>:null}
//     </div>
    
//   );
// };
