# Write your MySQL query statement below
select d.name as Department ,
    e.name as Employee,
    e.salary
from employee e
join department d
on e.departmentid=d.id
where (
    select count(distinct salary)
    from employee
    where salary>e.salary
    and DepartmentId=e.DepartmentId 
)<3;
