SELECT m.first_name, e.first_name
FROM employees AS e
	JOIN employees as m
    ON e.employee_id = m.manager_id;
