# Write your MySQL query statement below
SELECT ft.user_id, 
    ROUND(ft.avg_trial, 2) AS trial_avg_duration,
    ROUND(pt.avg_paid, 2) AS paid_avg_duration
FROM (
    SELECT user_id, AVG(activity_duration) AS avg_trial
    FROM UserActivity
    WHERE activity_type = 'free_trial'
    GROUP BY user_id
) AS ft

JOIN

(
    SELECT user_id, AVG(activity_duration) AS avg_paid
    FROM UserActivity
    WHERE activity_type = 'paid'
    GROUP BY user_id
) AS pt

ON ft.user_id = pt.user_id
ORDER BY ft.user_id;