SELECT * 
FROM employees
WHERE salary > 10000
UNION ALL
SELECT *
FROM employees
WHERE department_id = 100;
