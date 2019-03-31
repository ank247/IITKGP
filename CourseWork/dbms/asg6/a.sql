\\ postgresql used.

create table Student(
  roll_no int, 
  student_name varchar(30) not null,
  year_of_admission int, 
  dept_cd char(2) not null, 
  cgpa decimal(5,2), 
  percentage_marks decimal(5,2), 
  hall_cd char(2)); 

 create table Course(
   course_cd char(5), 
   course_name varchar(30) not null, 
   credits int not null, 
   max_marks decimal(5,2) not null, 
   dept_cd char(2) not null);
               
create table Registration(
  roll_no int, 
  course_cd char(5), 
  grade_point int, 
  marks_obtained decimal(5,2)) ;
