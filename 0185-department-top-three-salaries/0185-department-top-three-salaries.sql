# Write your MySQL query statement below
SELECT 
    d.name AS Department,
    e.name AS Employee,
    e.salary AS Salary
FROM 
    Employee AS e JOIN Department AS d
    ON e.departmentId = d.id
WHERE (
    SELECT COUNT(DISTINCT salary)
    FROM Employee AS e2
    WHERE e2.departmentId = e.departmentId AND e2.salary >= e.salary
    ) <= 3
-- ORDER BY Department, Salary DESC;