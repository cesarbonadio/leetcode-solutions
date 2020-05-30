# Write your MySQL query statement below

select w.id
from Weather pw, Weather w
    where date_sub(w.RecordDate, interval 1 day) = pw.RecordDate
    and w.Temperature > pw.Temperature