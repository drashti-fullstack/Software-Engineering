/*
Lab 1: Create two new users user1 and user2 and grant user1 permission to SELECT
from the courses table.
 Lab 2: Revoke the INSERT permission from user1 and give it to user2.
*/
create role students;
create user user1 identified by "drashti@123" default role students;

create user user2 identified by "dk@129" default role students;

grant select on cources to user1;

revoke select on cources from user1;

grant select on cources to user2;
