SELECT * 
FROM EMPLOYEES
WHERE HIRE_DATE > (
					SELECT HIRE_DATE
                    FROM EMPLOYEES
                    WHERE FIRST_NAME = 'Steven'
                    ORDER BY HIRE_DATE DESC
                    LIMIT 1
					);
                    
SELECT *
FROM EMPLOYEES
WHERE FIRST_NAME = 'STEVEN';                    