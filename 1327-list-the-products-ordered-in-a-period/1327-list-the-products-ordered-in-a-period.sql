# Write your MySQL query statement below
-- (SELECT product_id, SUM(unit) FROM Orders WHERE Month(order_date) = 02 GROUP BY product_id);

SELECT p.product_name, SUM(o.unit) AS unit 
FROM Products AS p LEFT JOIN Orders AS o 
ON p.product_id = o.product_id
WHERE YEAR(o.order_date) = 2020 AND MONTH(o.order_date) = 02 GROUP BY p.product_id HAVING unit >= 100;