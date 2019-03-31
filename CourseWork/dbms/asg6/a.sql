\\ postgresql used.

create table Student(
  roll_no int primary key not null, 
  student_name varchar(30) not null,
  year_of_admission int, 
  dept_cd char(2) not null, 
  cgpa decimal(5,2), 
  percentage_marks decimal(5,2), 
  hall_cd char(2)); 

 create table Course(
   course_cd char(5)primary key not null, 
   course_name varchar(30) not null, 
   credits int not null, 
   max_marks decimal(5,2) not null, 
   dept_cd char(2) not null);
               
create table Registration(
  roll_no int primary key not null, 
  course_cd char(5) primary key not null, 
  grade_point int, 
  marks_obtained decimal(5,2)) ;

create or replace function cgpa_func() 
returns trigger as $cg_update$
begin
  update student set cgpa where student.roll_no=Registration.roll_no;
  returning new;
end;
$cg_update$ language plpgsql;
                         
create trigger cgpa_trigger 
after insert on Registration
for each row execute procedure cgpa_func();

insert into Registration values(3,'dbms',5,76.0);

with cgpa_procedure as(
  update student set cgpa on student.roll_no=roll_no;
  returning student.cgpa);

insert into cgpa_procedure values(1);
                         
create table Employee(
  emp_cd int primary key not null, 
  manager_emp_cd int primary key not null
);                          

with recursive t(n) as(
   values(0)
   union all
   select manager_emp_cd from Employee 
   where emp_cd is not (insert emp_cd into Employee);
);                         

select manager_emp_cd from t;
                         
