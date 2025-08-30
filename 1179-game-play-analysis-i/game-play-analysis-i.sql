# Write your MySQL query statement below
select p1.player_id, min(p1.event_date) as first_login
from activity p1
group by player_id;

