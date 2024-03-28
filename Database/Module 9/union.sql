SELECT * 
FROM employees
WHERE salary > 10000
UNION
SELECT *
FROM employees
WHERE department_id = 100;
