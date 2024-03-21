create database �⸻���;

use �⸻���;

create table ����� (
	������ȣ char(10) not null,
	�̸� char(10),
	��ȭ��ȣ char(30),
	��й�ȣ char(10),
	���̵� char(10),
	�̸��� char(30),
	�����̾����� char(10),
	primary key (������ȣ)
);

insert into ����� values ('M_001', '��ö��', '010-1234-5678', 'mm11', 'm1', 'm1@naver.com', 'X');
insert into ����� values ('F_001', '�ڿ���', '010-8765-4321', 'ff11', 'f1', 'f1@naver.com', 'O');
insert into ����� values ('M_002', '���缮', '010-1111-2222', 'mm22', 'm2', 'm2@naver.com', 'O');
insert into ����� values ('F_002', '������', '010-2222-3333', 'ff22', 'f2', 'f2@naver.com', 'X');
insert into ����� values ('M_003', '�̼���', '010-3333-4444', 'mm33', 'm3', 'm3@naver.com', 'X');
insert into ����� values ('F_003', '�̿���', '010-4444-5555', 'ff33', 'f3', 'f3@naver.com', 'O');

create table ���� (
	�����ȣ char(10) not null,
	������ȣ char(10) not null,
	�������� char(20),
	������� char(10),
	é�� char(10),
	�帣 char(10),
	primary key (�����ȣ),
	foreign key (������ȣ) references ����� (������ȣ)
);

insert into ���� values ('Y_001', 'M_001', 'game', '10��', 'X', '����');
insert into ���� values ('Y_002', 'F_001', 'playlist', '1�ð�', 'O', '�뷡');
insert into ���� values ('Y_003', 'M_002', 'comic1', '30��', 'O', '����');
insert into ���� values ('Y_004', 'M_002', 'talk1', '20��', 'X', '��ũ');
insert into ���� values ('Y_005', 'F_002', 'comic2', '40��', 'O', '����');
insert into ���� values ('Y_006', 'M_003', 'comic3', '20��', 'X', '����');
insert into ���� values ('Y_007', 'F_003', 'music', '5��', 'X', '�뷡');
insert into ���� values ('Y_008', 'F_003', 'talk2', '10��', 'X', '��ũ');

create table ��ȭ (
	��ȭ��ȣ char(10) not null,
	��ȭ���� char(20),
	��ȭ���� char(10),
	���� int,
	primary key (��ȭ��ȣ),
);

insert into ��ȭ values ('V_001', '�����̴���', '148��', 18000);
insert into ��ȭ values ('V_002', '�ܿ�ձ�', '108��', 13000);
insert into ��ȭ values ('V_003', '���˵���', '105��', 10000);
insert into ��ȭ values ('V_004', '�ξ����', '135��', 20000);

create table ��� (
	��ǰ��ȣ char(10) not null,
	��ǰ�� char(10),
	���� int,
	primary key (��ǰ��ȣ)
);

insert into ��� values ('T_001', 'ġŲ', 20000);
insert into ��� values ('T_002', '�߷ζ�Ʈ', 0);
insert into ��� values ('T_003', '����', 25000);
insert into ��� values ('T_004', '������', 12000);

create table �ǵ���ϴ� (
	������ȣ char(10) not null,
	�����ȣ char(10) not null,
	���ƿ�� int,
	�Ⱦ��� int,
	��ۼ� int,
	primary key (������ȣ, �����ȣ),
	foreign key (������ȣ) references ����� (������ȣ),
	foreign key (�����ȣ) references ���� (�����ȣ)
);

insert into �ǵ���ϴ� values ('M_001', 'Y_001', 250, 20, 150);
insert into �ǵ���ϴ� values ('F_001', 'Y_002', 200, 11, 106);
insert into �ǵ���ϴ� values ('M_002', 'Y_003', 700, 15, 300);
insert into �ǵ���ϴ� values ('M_002', 'Y_004', 350, 12, 154);
insert into �ǵ���ϴ� values ('F_002', 'Y_005', 400, 10, 129);
insert into �ǵ���ϴ� values ('M_003', 'Y_006', 500, 14, 204);
insert into �ǵ���ϴ� values ('F_003', 'Y_007', 650, 22, 258);
insert into �ǵ���ϴ� values ('F_003', 'Y_008', 700, 30, 167);

create table �˻��ϴ� (
	������ȣ char(10) not null,
	�����ȣ char(10) not null,
	Ű���� char(10),
	primary key (������ȣ, �����ȣ),
	foreign key (������ȣ) references ����� (������ȣ),
	foreign key (�����ȣ) references ���� (�����ȣ)
);

insert into �˻��ϴ� values ('M_001', 'Y_002', '�뷡');
insert into �˻��ϴ� values ('F_001', 'Y_001', '����');
insert into �˻��ϴ� values ('M_002', 'Y_008', '��ũ');
insert into �˻��ϴ� values ('F_002', 'Y_004', '��ũ');
insert into �˻��ϴ� values ('M_003', 'Y_007', '�뷡');
insert into �˻��ϴ� values ('F_003', 'Y_003', '����');

create table ��û�ϴ� (
	������ȣ char(10) not null,
	�����ȣ char(10) not null,
	��û�ð� char(10),
	�˰��� char(10),
	primary key (������ȣ, �����ȣ),
	foreign key (������ȣ) references ����� (������ȣ),
	foreign key (�����ȣ) references ���� (�����ȣ)
);

insert into ��û�ϴ� values ('M_001', 'Y_002', '40��', '����');
insert into ��û�ϴ� values ('F_001', 'Y_001', '3��', '�뷡');
insert into ��û�ϴ� values ('M_002', 'Y_008', '8��', '��ũ');
insert into ��û�ϴ� values ('F_002', 'Y_004', '14��', '��ũ');
insert into ��û�ϴ� values ('M_003', 'Y_007', '4��', '�뷡');
insert into ��û�ϴ� values ('F_003', 'Y_003', '20��', '����');

create table ȫ���ϴ� (
	������ȣ char(10) not null,
	�����ȣ char(10) not null,
	��ǰ��ȣ char(10) not null,
	primary key (������ȣ, �����ȣ, ��ǰ��ȣ),
	foreign key (������ȣ) references ����� (������ȣ),
	foreign key (�����ȣ) references ���� (�����ȣ),
	foreign key (��ǰ��ȣ) references ��� (��ǰ��ȣ)
);

insert into ȫ���ϴ� values ('M_002', 'Y_003', 'T_001');
insert into ȫ���ϴ� values ('M_001', 'Y_001', 'T_002');
insert into ȫ���ϴ� values ('F_002', 'Y_005', 'T_003');
insert into ȫ���ϴ� values ('F_003', 'Y_008', 'T_004');

create table �����ϴ� (
	������ȣ char(10) not null,
	�����ڼ� int,
	primary key (������ȣ),
	foreign key (������ȣ) references ����� (������ȣ)
);

insert into �����ϴ� values ('M_001', 200);
insert into �����ϴ� values ('F_001', 150);
insert into �����ϴ� values ('M_002', 600);
insert into �����ϴ� values ('F_002', 300);
insert into �����ϴ� values ('M_003', 400);
insert into �����ϴ� values ('F_003', 620);

create table �����ϴ� (
	������ȣ char(10) not null,
	��ȭ��ȣ char(10) not null,
	primary key (������ȣ),
	foreign key (������ȣ) references ����� (������ȣ),
	foreign key (��ȭ��ȣ) references ��ȭ (��ȭ��ȣ)
);	

insert into �����ϴ� values ('M_001', 'V_003');
insert into �����ϴ� values ('F_001', 'V_002');
insert into �����ϴ� values ('F_002', 'V_004');
insert into �����ϴ� values ('F_003', 'V_001');


Select *
From �����;

Select *
From ����;

Select *
From ��ȭ;

Select *
From ���;

Select *
From �ǵ���ϴ�;

Select *
From �˻��ϴ�;

Select *
From ��û�ϴ�;

Select *
From ȫ���ϴ�;


-- �����̴��� ��ȭ�� ������ ������� �̸���?
Select ��ȭ����, �̸�
From �����, ��ȭ, �����ϴ�
Where �����.������ȣ = �����ϴ�.������ȣ
		and �����ϴ�.��ȭ��ȣ = ��ȭ.��ȭ��ȣ
		and ��ȭ���� = '�����̴���';

-- ���� �帣�� ������ ���ε��� ������� �̸��� �����ȣ��?
Select �帣, �����ȣ, �̸�
From �����, ����
Where �����.������ȣ = ����.������ȣ and �帣 = '����';

-- ȫ���� �ϰ� �ִ� ��� ������� ����� ��ǰ��?
Select ��ǰ��, ��������
From ���, ȫ���ϴ�, ����
Where ���.��ǰ��ȣ = ȫ���ϴ�.��ǰ��ȣ
		and ȫ���ϴ�.�����ȣ = ����.�����ȣ;

-- �뷡 �帣�� ������� ����� ���̴�? 
Select �帣, ��������, �������
From �����, ����
Where �����.������ȣ = ����.������ȣ and �帣 = '�뷡';

-- ������ �� �ִ� ��ȭ���� ����� ������?
Select ��ȭ����, ����
From ��ȭ;

-- ���ƿ� ���� 500 �̻��� ������� ������?
Select ���ƿ��, ��������
From ����, �ǵ���ϴ�
Where ����.�����ȣ = �ǵ���ϴ�.�����ȣ and ���ƿ�� >= 500;

-- ������ ���� ������������ �����ϰ� ������� �̸����� �˻��϶�
Select �����ڼ�, �̸�, �̸���
From �����, �����ϴ�
Where �����.������ȣ = �����ϴ�.������ȣ
Order By �����ڼ� Desc;

-- ��ũ Ű����� �˻��� �������� �̸���?
Select Ű����, �̸�
From �����,�˻��ϴ�
Where �����.������ȣ = �˻��ϴ�.������ȣ and Ű���� = '��ũ';

-- ����� comic1 ���� ȫ���ϰ� �ִ� ��ǰ�� �̸��� ������?
Select ��������, ��ǰ��, ����
From ����, ȫ���ϴ�, ���
Where ����.�����ȣ = ȫ���ϴ�.�����ȣ
		and ȫ���ϴ�.��ǰ��ȣ = ���.��ǰ��ȣ
		and �������� = 'comic1';

-- ��� ���� 250 �̻��� ������� �帣��?
Select �帣, ��������, ��ۼ�
From ����, �ǵ���ϴ�
Where ����.�����ȣ = �ǵ���ϴ�.�����ȣ and ��ۼ� >= 250;