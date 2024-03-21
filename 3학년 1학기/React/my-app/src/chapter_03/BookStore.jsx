import React from "react";
import Book from "./Book";
//import Book from "./Book";

function BookStore(props) {
  const element =
  (<div>
      <Book name="처음 만난 파이썬" numOfPage={300} price={30000} picurl="https://search.pstatic.net/sunny/?src=https%3A%2F%2Fimage.yes24.com%2Fgoods%2F41733133%2FXL&type=a340" />
      <Book name="처음 만난 AWS" numOfPage={400} price={27000} picurl="https://search.pstatic.net/common/?src=http%3A%2F%2Fpost.phinf.naver.net%2FMjAxODExMjJfNjAg%2FMDAxNTQyODYxMDkxOTYw.3p9VkFQbJyCFIdv_zLKslMGRMBN-_l_JFs9F1bKubZwg.-cZgbkn0d3A3rM9VoyCLRc1nScYXvKtlLO8v1VRQxUMg.JPEG%2FIcnlEh04luL3oJWn_iYwrnWIWU6s.jpg&type=a340" />
      <Book name="처음 만난 리액트" numOfPage={500} price={28000} picurl="https://search.pstatic.net/common/?src=http%3A%2F%2Fblogfiles.naver.net%2FMjAyMzEyMjVfMjAy%2FMDAxNzAzNDk2OTc5NjE3.Ln06honer49MkXkx2WfGeEvvD3nbqVFTN5asp-8g_UQg.h0Enuka48BY6gDKqXcWa0wwzMa0ITikBdawTaUFXIkMg.JPEG.love7620640%2FIMG_6059.JPG&type=a340"/>
  </div>);
  console.log(element);
  return (element);
}

export default BookStore;