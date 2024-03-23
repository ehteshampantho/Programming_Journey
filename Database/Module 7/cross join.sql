
SELECT employees.first_name, departments.department_name
FROM employees 
	CROSS JOIN departments ON employees.department_id = departments.department_id;
