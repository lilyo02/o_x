/*
function MyButton(props) {
  // isClicked와 setIsClicked가 업데이트 될 수 있도록?
  const [isClicked, setIsClicked] = React.useState(false);

  React.createElement = (
    type,
    [props],
    [...children]
  )

  return React.createElement(
    'button', // 순서대로 type, props, ...children
    // onClick이 있는 버튼?을 클릭할 때마다,
    // isClicked 상태가 true로..
    { onClick: () => setIsClicked(true) },n
    // 삼항연산자 조건문이 true면 앞에, false면 뒤에
    isClicked ? 'Clicked!' : 'Click here!'
  )
}

const domContainer = document.querySelector('#root');
const root = ReactDOM.createRoot(domContainer);
// render이 <div id="root"></div> 코드를 버튼으로 바꿈
root.render(React.createElement(MyButton));
*/

// type='div', props=null, children='테스트' => <div>테스트</div>
const element1 = React.createElement('div', null, '테스트');
const element = React.createElement('ul', null, [
  React.createElement('li', null, '사과'),
  React.createElement('li', null, '오렌지')
]);
// JSON.stringify는 element의 값을 JSON의 문자열로 반환
console.log(JSON.stringify(element));

const domContainer = document.getElementById('root');
const root = ReactDOM.createRoot(domContainer);
root.render(element);