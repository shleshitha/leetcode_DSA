# Write your MySQL query statement below
select d.name as Department ,
    e.name as Employee,
    e.salary
from (
    select *,
        dense_rank() over (
            partition by departmentId
            order by salary desc
        ) as rnk
    from employee
) e
join department d
on e.departmentid=d.id
where rnk<=3;
