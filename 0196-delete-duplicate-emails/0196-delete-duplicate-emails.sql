# Write your MySQL query statement below
DELETE p
FROM Person AS p JOIN Person AS p2
ON p.email = p2.email AND p.id > p2.id;