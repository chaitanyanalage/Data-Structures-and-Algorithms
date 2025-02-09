# Write your MySQL query statement below
SELECT u.name, sum(t.amount) AS balance
FROM users AS u JOIN transactions AS t 
ON u.account = t.account
GROUP BY u.name
HAVING sum(t.amount) > 10000;