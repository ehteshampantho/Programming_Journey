SELECT department_name, AVG(salary) 
FROM employees 
	JOIN departments
    ON employees.department_id = departments.department_id
GROUP BY department_name; 
