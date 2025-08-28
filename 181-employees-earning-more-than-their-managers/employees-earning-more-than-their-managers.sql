# Write your MySQL query statement below
select 
    a.name as Employee
from employee a
inner join employee b
on a.managerId=b.id and a.salary>b.salary;
