# Write your MySQL query statement below

select E.Name as Employee
    from Employee E, Employee M
    where E.ManagerId is not null
    and E.Salary > M.Salary
    and E.ManagerId = M.Id