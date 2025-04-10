# Write your MySQL query statement below
SELECT x, y, z, IF(x+y>z and y+z>x and z+x>y, "Yes", "No") AS Triangle
FROM Triangle