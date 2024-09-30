# Write your MySQL query statement below
SELECT product_id, product_name FROM Product WHERE product_id IN (
    SELECT product_id FROM Sales GROUP BY product_id
    HAVING min(sale_date) >= '2019-01-01' AND max(sale_date) <= '2019-03-31'
);