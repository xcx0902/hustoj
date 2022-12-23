set serveroutput on;

DECLARE
	message	varchar2(20) := ''; -- 在这里插入 Hello World!
BEGIN
	dbms_output.put_line(message);
END;

/
