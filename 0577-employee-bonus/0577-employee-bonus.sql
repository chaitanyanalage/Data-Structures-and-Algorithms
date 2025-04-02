# Write your MySQL query statement below
SELECT e.name, b.bonus
FROM Bonus AS b RIGHT JOIN Employee AS e
ON e.empId = b.empId
WHERE b.bonus < 1000 OR b.bonus IS NULL;