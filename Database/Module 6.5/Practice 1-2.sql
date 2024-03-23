SELECT *
FROM EMPLOYEES
ORDER BY SALARY ASC;

SELECT *
FROM EMPLOYEES
WHERE SALARY = (
				SELECT DISTINCT SALARY
                FROM EMPLOYEES
                ORDER BY SALARY DESC
                LIMIT 1
                OFFSET 2
				);

SELECT *
FROM EMPLOYEES
WHERE SALARY = (
				SELECT MAX(SALARY)
                FROM EMPLOYEES
                WHERE SALARY < (
								SELECT MAX(SALARY)
                                FROM EMPLOYEES 
                                WHERE SALARY < (
												SELECT MAX(SALARY)
                                                FROM EMPLOYEES
												)
								)
				);
                
SELECT *
FROM EMPLOYEES
WHERE SALARY = (
				SELECT DISTINCT SALARY
                FROM EMPLOYEES
                ORDER BY SALARY ASC
                LIMIT 1
                OFFSET 2
				);
                
                
SELECT *
FROM EMPLOYEES
WHERE SALARY = (
				SELECT MIN(SALARY)
                FROM EMPLOYEES
                WHERE SALARY > (
								SELECT MIN(SALARY)
                                FROM EMPLOYEES
                                WHERE SALARY > (
												SELECT MIN(SALARY)
                                                FROM EMPLOYEES
												)
								)
				);