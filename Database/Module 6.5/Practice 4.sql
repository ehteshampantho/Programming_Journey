WITH THIRDHIGH AS 
	(
		SELECT DISTINCT SALARY AS SAL
        FROM EMPLOYEES
        ORDER BY SALARY DESC
        LIMIT 1
        OFFSET 2
	)
SELECT *
FROM EMPLOYEES
WHERE SALARY = (SELECT SAL FROM THIRDHIGH);

WITH THIRDLOW AS
	(
		SELECT DISTINCT SALARY AS SAL1
        FROM EMPLOYEES
        ORDER BY SALARY ASC
        LIMIT 1
        OFFSET 2
	)    
SELECT *
FROM EMPLOYEES
WHERE SALARY = (SELECT SAL1 FROM THIRDLOW);    