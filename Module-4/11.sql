/*
Lab 1: Create two tables: departments and employees. Perform an INNER JOIN to
display employees along with their respective departments.
 Lab 2: Use a LEFT JOIN to show all departments, even those without employees.
*/

create table employees
(emp_id int primary key,
emp_name varchar(25),
emp_salary int);

create table departments
(emp_id int,
dep_id int not null,
manager_id int not null,
foreign key(emp_id) references employees(emp_id)
);

insert into employees(emp_id,emp_name,emp_salary) values
("101","Drashti","30000"),
("102","Shreya","35000");

insert into departments(emp_id,dep_id,manager_id) values 
("101","111","1001"),
("102","112","1002");

select employees.emp_id,employees.emp_name,employees.emp_salary,departments.dep_id from employees 
left join departments on employees.emp_id=departments.emp_id;