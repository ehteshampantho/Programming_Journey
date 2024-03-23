SELECT departments.department_name
FROM departments
	LEFT JOIN employees
    ON departments.department_id = employees.department_id
WHERE employees.department_id IS NULL; 

