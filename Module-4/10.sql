/*
Lab 1: Insert a few rows into the courses table and use COMMIT to save the changes.
 Lab 2: Insert additional rows, then use ROLLBACK to undo the last insert operation.
 Lab 3: Create a SAVEPOINT before updating the courses table, and use it to roll back
specific changes.
*/

select * from cources;

insert into cources(course_id,course_name,course_duration) values
("104","B.com","3"),
("105","B.sc.it","3"),
("106","MBA","2"),
("107","PGDCA","1"),
("108","MD","5");

commit;
insert into cources(course_id,course_name,course_duration) values
("109","cyber security","2"),
("110","designing","1"),
("111","M.sc.it","2"),
("112","B.sc.chemestry");

 select * from cources;
 
 delete from cources where course_id="102";
 
delete from cources where course_id="104";

delete from cources where course_id="106";

rollback;

select * from cources;

savepoint s1;

insert into cources value("113","B.sc.physics","2");

savepoint s2;

insert into cources value("114","B.sc.microbiology","2");

savepoint s3;

insert into cources value("115","MBA","2");

rollback to s1;

update cources set course_name="BCA" where course_id="109";

rollback;

 
 


