# Write your MySQL query statement below
DELETE
FROM Person
WHERE id NOT IN (
    SELECT * 
    FROM (
        SELECT MIN(id)
        FROM Person
        group by email
    ) a
);