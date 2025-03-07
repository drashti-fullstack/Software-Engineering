/*
Lab 1: Insert three records into the courses table using the INSERT command.
 Lab 2: Update the course duration of a specific course using the UPDATE command.
 Lab 3: Delete a course with a specific course_id from the courses table using the DELETE
command.
*/

insert into cources (course_id,course_name,course_duration) values
("101","B.Sc.It","3"),
("102","BBA","3"),
("103","B.sc","3");

update cources set course_duration=2 where course_id=102;