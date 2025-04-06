# Write your MySQL query statement below
SELECT 
    ROUND(
        COUNT(A1.player_id)
        / (SELECT COUNT(DISTINCT A3.player_id) FROM Activity AS A3)
    , 2) AS fraction
FROM Activity AS A1
WHERE (A1.player_id, DATE_SUB(A1.event_date, INTERVAL 1 DAY)) IN (
    SELECT A2.player_id, min(A2.event_date)
    FROM Activity AS A2
    GROUP BY A2.player_id
);