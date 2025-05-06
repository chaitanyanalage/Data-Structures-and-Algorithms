# Write your MySQL query statement below
SELECT u.user_id AS buyer_id, u.join_date, 
    (
        SELECT COUNT(*) 
        FROM Orders AS o
        WHERE u.user_id = o.buyer_id AND YEAR(o.order_date) = 2019
    ) AS orders_in_2019
FROM Users AS u