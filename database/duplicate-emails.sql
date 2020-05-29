# Write your MySQL query statement below

select howmany.Email from (
    select email, count(email) as n
    from Person
    group by email
) as howmany 
where howmany.n > 1