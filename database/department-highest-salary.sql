# Write your MySQL query statement below

 select d.Name as Department,
       e.Name as Employee,
       e.Salary as Salary 
       
       from Employee e join Department d
       on e.DepartmentId = d.id

       where (e.DepartmentId,e.Salary) IN
       (
           Select DepartmentId,Max(salary)
           from Employee
           group by DepartmentId
       )