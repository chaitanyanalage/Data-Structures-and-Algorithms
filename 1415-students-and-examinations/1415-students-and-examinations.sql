# Write your MySQL query statement below
SELECT std.student_id, std.student_name, su.subject_name, COUNT(exm.student_id) AS attended_exams
FROM Students AS std 
CROSS JOIN Subjects AS su
LEFT JOIN Examinations AS exm
ON std.student_id = exm.student_id AND su.subject_name = exm.subject_name
GROUP BY std.student_id, std.student_name, su.subject_name
ORDER BY std.student_id,std.student_name, su.subject_name;
