SELECT EmployeeUNI.UNIQUE_ID, NAME
FROM Employees
LEFT JOIN EmployeeUNI ON Employees.id = EmployeeUNI.id