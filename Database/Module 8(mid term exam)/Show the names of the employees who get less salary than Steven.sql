SELECT first_name
FROM employees
WHERE salary < (
		     SELECT salary
                             FROM employees
                             WHERE first_name = 'Steven'
                             LIMIT 1
		      );