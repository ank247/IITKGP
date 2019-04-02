\\ postgresql

create table department(
     dept_cd char(2),
     dept_name varchar(20),
     year_of_establishment int,
     primary key (dept_cd)
);

create table student(
     roll_no char(6),
     name varchar(20) default null,
     dept_cd char(2),
     address varchar(50),
     primary key (roll_no)
);

insert into table department(
     (CS, Computer Sc., 1960),
     (PH, Physics, 1940),
     (ME, Mechanical Engineering, 1910)
); 

insert into table student(
     (A001, CS, First Home),
     (A002, CS, Second Home),
     (A003, PH, Third Home),
     (A004, ME, Fourth Home)
);

select * from department where year_of_establishment < 1945;

select * from department where dept_cd is (select dept_cd from student);

select roll_no, name, dept_name from student right join department where 
student.dept_cd=department.dept_cd and year_of_establishment < 1945;
