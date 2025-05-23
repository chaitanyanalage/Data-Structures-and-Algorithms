# Write your MySQL query statement below
(
    SELECT name AS results
    FROM Users JOIN MovieRating USING (user_id)
    GROUP BY name
    ORDER BY COUNT(*) DESC, 
    name LIMIT 1
)

UNION ALL

(
    SELECT title AS results
    FROM Movies JOIN MovieRating USING (movie_id)
    WHERE EXTRACT(YEAR_MONTH FROM created_at) = 202002
    GROUP BY title
    ORDER BY AVG(rating) DESC, 
    title LIMIT 1
);