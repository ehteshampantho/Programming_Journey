SELECT employees.first_name, departments.department_name
FROM employees 
	JOIN departments ON employees.department_id = departments.department_id;
    
SELECT employees.first_name, departments.department_name
FROM employees
		JOIN departments USING(department_id);