# Write your MySQL query statement below
SELECT q1.person_name
FROM Queue AS q1 JOIN Queue AS q2
ON q1.turn >= q2.turn
GROUP BY q1.turn
HAVING SUM(q2.weight) <= 1000
LIMIT 1; 