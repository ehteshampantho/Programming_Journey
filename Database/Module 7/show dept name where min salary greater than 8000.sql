SELECT department_name, MIN(salary), AVG(salary)
FROM employees
	JOIN departments
    ON employees.department_id = departments.department_id
GROUP BY department_name
HAVING MIN(salary) > 8000;    