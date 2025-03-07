/*
Lab 1: Group employees by department and count the number of employees in each
department using GROUP BY.
 Lab 2: Use the AVG aggregate function to find the average salary of employees in each
department
*/

select emp_id, count(emp_id) as EMPLOYEE_COUNT from employees group by emp_id;

select emp_id, avg(emp_salary) as AVG_SALARY from employees group by emp_id; 
