# Write your MySQL query statement below
SELECT mgr.employee_id, mgr.name, COUNT(em.employee_id) AS reports_count, ROUND(AVG(em.age)) AS average_age
FROM Employees AS em JOIN Employees AS mgr
ON em.reports_to = mgr.employee_id
GROUP BY employee_id
ORDER  BY employee_id;