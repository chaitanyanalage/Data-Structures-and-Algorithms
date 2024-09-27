# Write your MySQL query statement below
SELECT e.name AS Employee FROM Employee AS e, Employee AS m
WHERE e.managerid = m.id AND e.salary > m.salary;