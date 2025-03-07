/*
Lab 1: Create a new database named school_db and a table called students with the
following columns: student_id, student_name, age, class, and address.
 Lab 2: Insert five records into the students table and retrieve all records using the SELECT
statement.
*/

create database school_db;

create table students(
student_id int primary key,
student_name varchar(25),
student_age int,
class varchar(2),
address varchar(30) 
);

insert into students ( student_id,student_name,student_age,class,address) values 
("100","Drashti",22,"A","vastral,ahmedabad"),
("101","Shreya",21,"B","Meghani circle,Bahavnagar"),
("102","Pooja",23,"A","Kaliyabid,Bhavnagar"),
("103","Dhanavi",24,"B","RTO circle,Bhavanagr"),
("104","Nikita",23,"A","Sardarnagar,Bhavnaagr");

select * from students;

create table product(product_id int primary key auto_increment,
product_name varchar(25),
product_price int (20),
product_discount_price int(20)
);

insert into product(product_id,product_name,product_price,pro_dis_price) values 
("1","Biscuit","50","30"),
("2","Chocolates","500","430"),
("3","Wafers","40","35"),
("4","Thumbs up","70","65"),
("5","coca cola","100","85");
