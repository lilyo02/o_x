create database 기말고사;

use 기말고사;

create table 사용자 (
	유저번호 char(10) not null,
	이름 char(10),
	전화번호 char(30),
	비밀번호 char(10),
	아이디 char(10),
	이메일 char(30),
	프리미엄유무 char(10),
	primary key (유저번호)
);

insert into 사용자 values ('M_001', '김철수', '010-1234-5678', 'mm11', 'm1', 'm1@naver.com', 'X');
insert into 사용자 values ('F_001', '박영희', '010-8765-4321', 'ff11', 'f1', 'f1@naver.com', 'O');
insert into 사용자 values ('M_002', '유재석', '010-1111-2222', 'mm22', 'm2', 'm2@naver.com', 'O');
insert into 사용자 values ('F_002', '이은지', '010-2222-3333', 'ff22', 'f2', 'f2@naver.com', 'X');
insert into 사용자 values ('M_003', '이수근', '010-3333-4444', 'mm33', 'm3', 'm3@naver.com', 'X');
insert into 사용자 values ('F_003', '이영지', '010-4444-5555', 'ff33', 'f3', 'f3@naver.com', 'O');

create table 영상 (
	영상번호 char(10) not null,
	유저번호 char(10) not null,
	영상제목 char(20),
	영상길이 char(10),
	챕터 char(10),
	장르 char(10),
	primary key (영상번호),
	foreign key (유저번호) references 사용자 (유저번호)
);

insert into 영상 values ('Y_001', 'M_001', 'game', '10분', 'X', '게임');
insert into 영상 values ('Y_002', 'F_001', 'playlist', '1시간', 'O', '노래');
insert into 영상 values ('Y_003', 'M_002', 'comic1', '30분', 'O', '예능');
insert into 영상 values ('Y_004', 'M_002', 'talk1', '20분', 'X', '토크');
insert into 영상 values ('Y_005', 'F_002', 'comic2', '40분', 'O', '예능');
insert into 영상 values ('Y_006', 'M_003', 'comic3', '20분', 'X', '예능');
insert into 영상 values ('Y_007', 'F_003', 'music', '5분', 'X', '노래');
insert into 영상 values ('Y_008', 'F_003', 'talk2', '10분', 'X', '토크');

create table 영화 (
	영화번호 char(10) not null,
	영화제목 char(20),
	영화길이 char(10),
	가격 int,
	primary key (영화번호),
);

insert into 영화 values ('V_001', '스파이더맨', '148분', 18000);
insert into 영화 values ('V_002', '겨울왕국', '108분', 13000);
insert into 영화 values ('V_003', '범죄도시', '105분', 10000);
insert into 영화 values ('V_004', '인어공주', '135분', 20000);

create table 기업 (
	제품번호 char(10) not null,
	제품명 char(10),
	가격 int,
	primary key (제품번호)
);

insert into 기업 values ('T_001', '치킨', 20000);
insert into 기업 values ('T_002', '발로란트', 0);
insert into 기업 values ('T_003', '피자', 25000);
insert into 기업 values ('T_004', '떡볶이', 12000);

create table 피드백하다 (
	유저번호 char(10) not null,
	영상번호 char(10) not null,
	좋아요수 int,
	싫어요수 int,
	댓글수 int,
	primary key (유저번호, 영상번호),
	foreign key (유저번호) references 사용자 (유저번호),
	foreign key (영상번호) references 영상 (영상번호)
);

insert into 피드백하다 values ('M_001', 'Y_001', 250, 20, 150);
insert into 피드백하다 values ('F_001', 'Y_002', 200, 11, 106);
insert into 피드백하다 values ('M_002', 'Y_003', 700, 15, 300);
insert into 피드백하다 values ('M_002', 'Y_004', 350, 12, 154);
insert into 피드백하다 values ('F_002', 'Y_005', 400, 10, 129);
insert into 피드백하다 values ('M_003', 'Y_006', 500, 14, 204);
insert into 피드백하다 values ('F_003', 'Y_007', 650, 22, 258);
insert into 피드백하다 values ('F_003', 'Y_008', 700, 30, 167);

create table 검색하다 (
	유저번호 char(10) not null,
	영상번호 char(10) not null,
	키워드 char(10),
	primary key (유저번호, 영상번호),
	foreign key (유저번호) references 사용자 (유저번호),
	foreign key (영상번호) references 영상 (영상번호)
);

insert into 검색하다 values ('M_001', 'Y_002', '노래');
insert into 검색하다 values ('F_001', 'Y_001', '게임');
insert into 검색하다 values ('M_002', 'Y_008', '토크');
insert into 검색하다 values ('F_002', 'Y_004', '토크');
insert into 검색하다 values ('M_003', 'Y_007', '노래');
insert into 검색하다 values ('F_003', 'Y_003', '예능');

create table 시청하다 (
	유저번호 char(10) not null,
	영상번호 char(10) not null,
	시청시간 char(10),
	알고리즘 char(10),
	primary key (유저번호, 영상번호),
	foreign key (유저번호) references 사용자 (유저번호),
	foreign key (영상번호) references 영상 (영상번호)
);

insert into 시청하다 values ('M_001', 'Y_002', '40분', '게임');
insert into 시청하다 values ('F_001', 'Y_001', '3분', '노래');
insert into 시청하다 values ('M_002', 'Y_008', '8분', '토크');
insert into 시청하다 values ('F_002', 'Y_004', '14분', '토크');
insert into 시청하다 values ('M_003', 'Y_007', '4분', '노래');
insert into 시청하다 values ('F_003', 'Y_003', '20분', '예능');

create table 홍보하다 (
	유저번호 char(10) not null,
	영상번호 char(10) not null,
	제품번호 char(10) not null,
	primary key (유저번호, 영상번호, 제품번호),
	foreign key (유저번호) references 사용자 (유저번호),
	foreign key (영상번호) references 영상 (영상번호),
	foreign key (제품번호) references 기업 (제품번호)
);

insert into 홍보하다 values ('M_002', 'Y_003', 'T_001');
insert into 홍보하다 values ('M_001', 'Y_001', 'T_002');
insert into 홍보하다 values ('F_002', 'Y_005', 'T_003');
insert into 홍보하다 values ('F_003', 'Y_008', 'T_004');

create table 구독하다 (
	유저번호 char(10) not null,
	구독자수 int,
	primary key (유저번호),
	foreign key (유저번호) references 사용자 (유저번호)
);

insert into 구독하다 values ('M_001', 200);
insert into 구독하다 values ('F_001', 150);
insert into 구독하다 values ('M_002', 600);
insert into 구독하다 values ('F_002', 300);
insert into 구독하다 values ('M_003', 400);
insert into 구독하다 values ('F_003', 620);

create table 지불하다 (
	유저번호 char(10) not null,
	영화번호 char(10) not null,
	primary key (유저번호),
	foreign key (유저번호) references 사용자 (유저번호),
	foreign key (영화번호) references 영화 (영화번호)
);	

insert into 지불하다 values ('M_001', 'V_003');
insert into 지불하다 values ('F_001', 'V_002');
insert into 지불하다 values ('F_002', 'V_004');
insert into 지불하다 values ('F_003', 'V_001');


Select *
From 사용자;

Select *
From 영상;

Select *
From 영화;

Select *
From 기업;

Select *
From 피드백하다;

Select *
From 검색하다;

Select *
From 시청하다;

Select *
From 홍보하다;


-- 스파이더맨 영화를 구입한 사용자의 이름은?
Select 영화제목, 이름
From 사용자, 영화, 지불하다
Where 사용자.유저번호 = 지불하다.유저번호
		and 지불하다.영화번호 = 영화.영화번호
		and 영화제목 = '스파이더맨';

-- 예능 장르로 영상을 업로드한 사용자의 이름과 영상번호는?
Select 장르, 영상번호, 이름
From 사용자, 영상
Where 사용자.유저번호 = 영상.유저번호 and 장르 = '예능';

-- 홍보를 하고 있는 모든 영상들의 제목과 제품은?
Select 제품명, 영상제목
From 기업, 홍보하다, 영상
Where 기업.제품번호 = 홍보하다.제품번호
		and 홍보하다.영상번호 = 영상.영상번호;

-- 노래 장르의 영상들의 제목과 길이는? 
Select 장르, 영상제목, 영상길이
From 사용자, 영상
Where 사용자.유저번호 = 영상.유저번호 and 장르 = '노래';

-- 구입할 수 있는 영화들의 제목과 가격은?
Select 영화제목, 가격
From 영화;

-- 좋아요 수가 500 이상인 영상들의 제목은?
Select 좋아요수, 영상제목
From 영상, 피드백하다
Where 영상.영상번호 = 피드백하다.영상번호 and 좋아요수 >= 500;

-- 구독자 수를 내림차순으로 정렬하고 사용자의 이메일을 검색하라
Select 구독자수, 이름, 이메일
From 사용자, 구독하다
Where 사용자.유저번호 = 구독하다.유저번호
Order By 구독자수 Desc;

-- 토크 키워드로 검색한 유저들의 이름은?
Select 키워드, 이름
From 사용자,검색하다
Where 사용자.유저번호 = 검색하다.유저번호 and 키워드 = '토크';

-- 기업이 comic1 영상에 홍보하고 있는 제품의 이름과 가격은?
Select 영상제목, 제품명, 가격
From 영상, 홍보하다, 기업
Where 영상.영상번호 = 홍보하다.영상번호
		and 홍보하다.제품번호 = 기업.제품번호
		and 영상제목 = 'comic1';

-- 댓글 수가 250 이상인 영상들의 장르는?
Select 장르, 영상제목, 댓글수
From 영상, 피드백하다
Where 영상.영상번호 = 피드백하다.영상번호 and 댓글수 >= 250;