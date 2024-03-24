SELECT * FROM EMPLOYEES;

SELECT employees.first_name, jobs.job_title 
FROM employees, jobs
WHERE employees.job_id = jobs.job_id