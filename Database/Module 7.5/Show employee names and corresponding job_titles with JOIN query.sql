SELECT e.first_name, j.job_title
FROM employees AS e
	JOIN jobs AS j
    WHERE e.job_id = j.job_id