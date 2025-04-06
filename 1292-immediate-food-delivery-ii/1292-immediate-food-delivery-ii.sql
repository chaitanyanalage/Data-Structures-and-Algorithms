# Write your MySQL query statement below
-- SELECT
--     ROUND(((SELECT count(DISTINCT customer_id) FROM Delivery WHERE order_date = customer_pref_delivery_date)/SUM(delivery_id)) * 100, 2) AS immediate_percentage
-- FROM Delivery

SELECT ROUND(AVG(order_date = customer_pref_delivery_date) * 100,2) AS immediate_percentage
FROM Delivery
WHERE (customer_id, order_date) IN (
    SELECT customer_id, min(order_date) 
    FROM Delivery
    GROUP BY customer_id
);