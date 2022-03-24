CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE M INT DEFAULT 0;
    SET M = N-1;
  RETURN (
      # Write your MySQL query statement below.
       select distinct salary from Employee order by salary desc limit 1 offset M
  );
END