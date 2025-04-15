# Write your MySQL query statement below
-- SELECT employee_id
-- FROM Employees
-- WHERE salary < 30000 
--     AND manager_id NOT IN (
--         SELECT employee_id
--         FROM Employees
--     )
-- ORDER BY employee_id;

SELECT emp.employee_id
FROM Employees AS emp LEFT JOIN Employees AS mgr
ON emp.manager_id = mgr.employee_id
WHERE emp.salary < 30000 AND mgr.employee_id IS NULL AND emp.manager_ID IS NOT NULL
ORDER BY emp.employee_id;