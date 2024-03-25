SELECT job_id, COUNT(job_id) AS 'employee numbers'
FROM employees
GROUP BY job_id;
