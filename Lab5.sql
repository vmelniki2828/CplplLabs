use master;
go
if DB_ID('Lab5') is not null
  drop database Lab5
go
create database Lab5
go
use Lab5;

create table Questions
(
  QuestionID int primary key identity,
  QuestionText nvarchar(30)
);

insert into Questions values 
('5+2'),
('3+3'),
('1+9')

