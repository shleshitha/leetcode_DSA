# Write your MySQL query statement below
select c.name as Customers
-- o.CustomerId
from Customers c
left join Orders o on c.id=o.CustomerId
where o.customerid is NULL;