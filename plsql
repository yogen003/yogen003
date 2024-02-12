1.	Write a PL/SQL program to arrange the number of two variable in such a way that the small number will store in num_small variable and large number will store in num_large variable.
Program :
DECLARE¬
num_small NUMBER;
num_large NUMBER;
n1 number;
n2 number;
BEGIN
n1:=:n1;

n2:=:n2;
IF n1 > n2 THEN
num_small:=n2;
num_large:=n1;
else
num_small:=n1;
num_large:=n2;
END IF;
DBMS_OUTPUT.PUT_LINE ('num_small = '||num_small);
DBMS_OUTPUT.PUT_LINE ('num_large = '||num_large);
END;
/
     Output:
      

2.	Write a PL/SQL procedure to calculate the incentive on a target achieved and display the message either the record updated or not.
 Program:
DECLARE
PROCEDURE sai (s_achieve  NUMBER,target_qty  NUMBER,emp_id NUMBER)
IS
incentive   NUMBER := 0;
BEGIN
IF s_achieve > (target_qty + 200) THEN
incentive := (s_achieve - target_qty)/4;
ELSE
incentive :=330;
END IF;
DBMS_OUTPUT.PUT_LINE ('incentive = ' || incentive);
UPDATE emp
SET sal = sal + incentive
WHERE empno = emp_id;
END sai;
BEGIN
sai (8900, 7000, 1);
sai (3300, 9000, 2);
END;
/

 
     
   Output:
    



3.	Write a PL/SQL program to check whether a number is even or odd. 
Program:
declare 
num number :=:a;

begin
if(mod(num,2)=0) then
dbms_output.put_line('given number ' || num || ' is even');
else 
dbms_output.put_line('given number ' || num || ' is odd ');
end if;
end;
Output:
 





 
4. Write a PL/SQL program to check whether a date falls on weekend i.e. SATURDAY or SUNDAY. 
Program:
DECLARE
d DATE :=:d;
day VARCHAR2(15);
BEGIN
day := RTRIM(TO_CHAR(d, 'DAY'));
IF day IN ('SATURDAY', 'SUNDAY') THEN
dbms_output.new_line;
DBMS_OUTPUT.PUT_LINE('The day of the given date is '||day||' and it falls on 
weekend');
ELSE
dbms_output.new_line;
DBMS_OUTPUT.PUT_LINE ('The day of the given date is '||day||' and it does not 
fall on the weekend');
END IF;
END;
/
Output:
 
 




 

5.	Write a PL/SQL program to display the description against a grade.
Program:
DECLARE
 per number;
 BEGIN
 per:=:per;
 IF per>=85 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is A++: Excellent');
 ELSIF per>=80 and per<85 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is A+');
 ELSIF per>=75 and per<80 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is B+');
 ELSIF per>=65 and per<75 THEN
 dbms_output. Put_line('Your percent '||per||' Grade is B');
 ELSIF per>=35 and per<65 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is c');
 ELSE
 dbms_output.Put_line('you are failed.'); 
END IF;
 END; 
/
Output:
             
 


6.	Write a PL/SQL program to display the description against a grade using CASE statement. 

Program:
DECLARE
 per number;
 BEGIN
 per:=:per;
case
 when per>=85 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is A++: Excellent');
 when per>=80 and per<85 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is A+');
 when per>=75 and per<80 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is B+');
 when per>=65 and per<75 THEN
 dbms_output. Put_line('Your percent '||per||' Grade is B');
 when per>=35 and per<65 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is c');
 ELSE
 dbms_output.Put_line('you are failed.'); 
END case;
 END; 
/
      Output:
 
 



























7.	Write a PL/SQL program to display the description against a grade using CASE statement with EXCEPTION.
Program:
DECLARE
 per number;
 BEGIN
 per:=:per;
case
 when per>=85 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is A++: Excellent');
 when per>=80 and per<85 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is A+');
 when per>=75 and per<80 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is B+');
 when per>=65 and per<75 THEN
 dbms_output. Put_line('Your percent '||per||' Grade is B');
 when per>=35 and per<65 THEN
 dbms_output.Put_line('Your percent '||per||' Grade is c');
 ELSE
 dbms_output.Put_line('you are failed.'); 
END case;
exception
when VALUE_ERROR then
 dbms_output.Put_line('please enter valid percent');
 END; 
/
Output:
 
 



























8.	Write a PL/SQL program to check whether a given number is positive, negative or zero. 
Program:
declare
num number:=:num;
begin
if num>0 then
dbms_output.put_line('Positive Number');
elsif num<0 then
dbms_output.put_line('Negative Number ');
else 
dbms_output.put_line('Zero');
end if;
end;
/
Output:
 
 

 
 




















9.	Write a PL/SQL program to check whether a given character is letter or digit. 
     Program:
declare
val CHAR(1) :=:val;
BEGIN
 IF ( val >= 'A' AND val<= 'Z' ) OR ( val >= 'a' AND val<= 'z') THEN
 dbms_output.Put_line ('The entered value is a charcter letter because the 
entered values = '||val);
end if; 
if val BETWEEN '0' AND '9' THEN
 dbms_output.Put_line ('The entered value is a number because the 
entered values = '||val);
 END IF;
 END;
/
Output: 
 
 





10.	Write a PL/SQL program to convert a temperature in scale Fahrenheit to Celsius and vice versa. 
Program:
DECLARE
 t NUMBER;
 t_scale CHAR;
 new_t NUMBER;
 new_scale CHAR;
 BEGIN
 t:=:t;
 t_scale:=:Scale;
 
 IF t_scale = 'C' THEN
 new_t := ( ( 9 * t ) / 5 ) + 32;
 new_scale := 'F';
 ELSif t_scale = 'F' THEN
 new_t := ( ( t - 32 ) * 5 ) / 9;
 new_scale := 'C';
 ELSE 
 dbms_output.Put_line ('The scale you input is not a valid scale');
 END IF;
 dbms_output.Put_line ('The new temperature in scale '
 ||new_scale ||' is: ' ||new_t);
 END;
/
Output:
 




 























11.	Write a program in PL/SQL to print the value of a variable inside and outside a loop using LOOP EXIT statement. 
Program:
DECLARE
 num NUMBER :=1;
BEGIN
 DBMS_OUTPUT.PUT_LINE ('The value of variable inside the loop is: ');
 LOOP
 DBMS_OUTPUT.PUT_LINE (num);
 num := num + 1;
 IF num > 5 THEN
 EXIT;
 END IF;
 END LOOP;
 DBMS_OUTPUT.PUT_LINE('The value of variable outside the loop is: ' || 
num);
END;
/
Output:
 





12.	Write a program in PL/SQL to show the uses of nested loop.
Program:
DECLARE
i NUMBER;
j NUMBER;
BEGIN
 FOR i IN 1 .. 4 LOOP
FOR j IN 1..i LOOP
DBMS_OUTPUT.PUT(' * ');
END LOOP;
DBMS_OUTPUT.NEW_LINE();
END LOOP;
END;
/


Output:

 







13.	Write a program in PL/SQL using nested loop with EXIT WHEN statement. 
Program:
declare
i NUMBER;
j NUMBER;
BEGIN
 FOR i IN 1 .. 10 LOOP
FOR j IN 1 .. i LOOP
DBMS_OUTPUT.PUT(' * ');
END LOOP;
DBMS_OUTPUT.NEW_LINE();
EXIT WHEN (i > 7);
END LOOP;
END;
/
Output:
 







14.	Write a program in PL/SQL using loop with CONTINUE statement. 
Program:
DECLARE 
 a number := 1; 
BEGIN 
 dbms_output.put_line ('value of a: '); 
 WHILE a <= 10 LOOP 
 dbms_output.put(a||' '); 
 a := a + 1; 
 IF a = 5 THEN 
dbms_output.put(a||'(from continue) '); 
 a := a + 1; 
 CONTINUE; 
 END IF; 
 END LOOP; 
dbms_output.new_line;
END; 
/
Output:
 







15.	Write a program in PL/SQL to print 1st n numbers. 
Program:
DECLARE
 n number:=:n;
BEGIN
DBMS_OUTPUT.PUT_LINE ('The first '||n||' number is: ');
 for i in 1..n loop
 dbms_output.put(i||' ');
 END LOOP;
 dbms_output.new_line;
END;
/
Output:
 
 








16.	Write a program in PL/SQL to print 1st n numbers with a difference of 3 and starting from 1. 
Program:
DECLARE
 a number:=:n;
b number :=1;
BEGIN
DBMS_OUTPUT.PUT_LINE ('The first '||a||' numbers with difference of 3 
and starting from 1.: ');
 for i in 1..a loop
 dbms_output.put(b||' ');
 b:= b+3;
 END LOOP;
 dbms_output.new_line;
END;
/
Output:
 
 



17.	Write a program in PL/SQL to print the prime numbers between 1 to 50. 
Program:
declare
i number;
j number(2);
c number;
begin dbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

dbms_output.put_line('prime number betwwen 1 to 50 is : ');
for i in 1..50
loop
c:=0;
for j in 1..50
loop
if mod(i,j) = 0 then
c:=c+1;
end if;
end loop;
if(c=2)then
dbms_output.put(i||' ');
end if;
end loop;
dbms_output.new_line;
end;
/
Output:
 
 

18.	Write a program in PL/SQL to insert records from one table to another.
Program:
CREATE TABLE emp_temp (emp_id NUMBER, emp_email VARCHAR2(40));

insert into emp_temp values(101, ‘paisraveen@gmail.com');

select *from emp_temp
DECLARE
 number_of_emp NUMBER;
i number;
BEGINdbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

 SELECT COUNT(emp_id) INTO number_of_emp
 FROM emp_temp;
 
 FOR i IN 1..number_of_emp LOOP
 INSERT INTO emp_temp (emp_id, emp_email)VALUES(i, 'not available 
now');
 END LOOP;
dbms_output.put_line(number_of_emp);
END;
/
Output:
 
 



























19.Write a program in PL/SQL to create an implicit cursor with for loop. 
Program:
CREATE TABLE emp_temp (emp_id NUMBER, emp_email 
VARCHAR2(40));
insert into emp_temp values(101, ‘paisraveen@gmail.com');
select *from emp_temp;
Begindbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

 FOR emp_temp IN (SELECT e1.emp_id, e1.emp_email from emp_temp 
e1,emp_temp e2 where e1.emp_id=e2.emp_id) 
 LOOP
dbms_output.Put_line(sql%rowcount);
if sql%found then
dbms_output.Put_line('data found');
end if;
 END LOOP;
END; 
     / 
     Output:

 






20. Write a program in PL/SQL to create an explicit cursor with for loop. 
Program:
CREATE TABLE emp_temp (emp_id NUMBER, emp_email 
VARCHAR2(40));
insert into emp_temp values(101,'shubham99@gmail.com');
insert into emp_temp values(101,'shubham99@gmail.com');
select *from emp_temp
DECLARE 
 c_id emp_temp.emp_id%type; 
 c_mail emp_temp.emp_email%type;
 total_rows number(2); 
 CURSOR cur_sai is SELECT emp_id, emp_email FROM emp_temp; 
BEGIN dbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

 OPEN cur_sai; 
 LOOP 
 FETCH cur_sai into c_id, c_mail; 
 EXIT WHEN cur_sai %notfound; 
END LOOP; 
DBMS_OUTPUT.PUT_LINE('total row= '||cur_sai %rowcount); 
for i in 1..cur_sai %rowcount
LOOP
 FETCH cur_sai into c_id, c_mail; 
 dbms_output.put_line(c_id || ' ' || c_mail); 
 END LOOP; 
 CLOSE cur_sai; 
END; /
Output:
 
 

21. Write a program in PL/SQL Program to Find Factorial of a Number.
Program:
declare
fact number:=1;
n number;
i number:=1;
begindbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

n:=:n;
while i<=n loop
fact:=fact*i;
i:=i+1;
end loop;
dbms_output.put_line('factorial of '||n||' is= '||fact);
end;
/
Output:
 
 


22. Write a program in PL/SQL Program to Print Table of a Number.
Program:
declare
n number;
i number;
t number;
begin
n:=:n;
dbms_output.put_line('table of '||n||' is: ');
for i in 1..10
loop
t:=n*i;
dbms_output.put_line(t);
end loop;
end;
/
Output:
 
 
 

23. Write a program in PL/SQL Program for Reverse of a Number.
Program:
DECLARE
n NUMBER;
r NUMBER;
num number;
BEGINdbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

n:=:n;
num:=n;
r:=0;
WHILE n>0 LOOP
r:=(r*10) + mod(n,10);
n:=floor(n/10);
END LOOP;
DBMS_OUTPUT.PUT_LINE('Reverse of the inpur '||num||' is: ' || r);
END;
/
Output:
 
 


24. Write a program in PL/SQL Program for Fibonacci Series.
Program:
declare
a number := 0;
b number := 1;
temp number;
n number := 10;
i number;
begindbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

 dbms_output.put_line('fibonacci series is :');
 dbms_output.put(a);
 dbms_output.put(' '||b);
 for i in 2..n
 loop
 temp:= a + b;
 a := b;
 b := temp;
 dbms_output.put(' '||temp);
 end loop;
 dbms_output.new_line;
end;
/
Output:
 

25. Write a program in. PL/SQL Program to Check Number is Odd or Even.
Program:
declare
n number:=:n;
begindbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');
 
if mod(n,2) = 0 then
dbms_output.put_line(n||' is even number');
else
dbms_output.put_line(n||' is odd number');
end if;
end;
/
Output:
 
 

 

26. Write a program in PL/SQL Program to Reverse a String.
Program:
DECLARE
 string VARCHAR(50) := ‘Sai';
 len NUMBER;
 reverse VARCHAR(50);
BEGINdbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

 len := Length('string');
 FOR i IN REVERSE 1..len
LOOP
 reverse := reverse || Substr(string, i, 1);
 END LOOP;
 dbms_output.Put_line('Reversed string of Sai: ' || reverse);
END; 
/


Output:
 








27. Write a program in Pl/SQL Program for Palindrome Number.

Program:
DECLARE
 a number;
 b number;
 temp number:=0;
 rem number;
BEGIN
dbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

 a :=:a;
 b:=a;
 while a>0
 loop
 rem := mod(a,10);
 temp := (temp*10)+rem;
 a:= trunc(a/10);
 end loop;
 if b = temp
 then
 dbms_output.put_line(temp ||' equal '||b||' means number is 
Palindrome');
 else
 dbms_output.put_line(temp ||' not equal '||b||' means is not 
Palindrome');
 end if;
END;
/


Output:
 
 

















 
28. Write a program in PL/SQL Program to Swap two Numbers.
Program:
DECLARE 
a number := 267; 
b number := 145;
t number ;
BEGIN
 dbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

 dbms_output.put_line ('a =' || a); 
 dbms_output.put_line ('b =' || b||' '); 
 dbms_output.new_line;
t:=a;
a:=b;
b:=t;
 dbms_output.put_line ('a ='|| a); 
 dbms_output.put_line ('b =' || b||' '); 
END; 
/


Output:

 

 
29. Write a program in PL/SQL Program for Armstrong Number.
Program:
declare 
    n number:=407; 
    s number:=0; 
    r number; 
    len number; 
    m number; 
 begindbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

    m := n; 
    len := length(to_char(n)); 
    while n>0 
    loop 
        r := mod(n , 10); 
        s := s + power(r , len); 
        n := trunc(n / 10); 
    end loop; 
      
    if m = s 
    then
        dbms_output.put_line('yes it is armstrong number!!'); 
    else
        dbms_output.put_line('noit is not a armstrong number!!'); 
    end if;       
end; 



 
Output:
 


 
30. Write a program in PL/SQL Program to Find Greatest of Three Numbers.
Program:
declare 
num number:=:number1;
num1 number :=:number2;
num2 number :=:number3;
begindbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

if (num>num1) then 
 if(num>num2) then 
   dbms_output.put_line(num || ' is gretest number ');
  else
  dbms_output.put_line(num2|| ' is greatest number is gretest number ');
end if;
else
  if(num1>num2) then
  dbms_output.put_line(num1 ||' is gretest number ');
  else
   dbms_output.put_line(num2||' is greatest number among all the number given');
  end if;
end if;
end;
/
Output:
 
 
 
31. Write a program in PL/SQL Program to Print Patterns.
A)*
    * *
    * * *
    * * * *
    * * * * *
Program:
declare
n number:=5;
i number;
j number;
begindbms_output.put_line('______________________________________________________');
dbms_output.put_line('AUTHOR : YOGEN');
dbms_output.put_line('MCA 1st SEMESTER');
dbms_output.put_line('UNIT - V');
dbms_output.put_line('DATE : 01.01.2024 ');
dbms_output.put_line('______________________________________________________');

for i in 1..n
loop
for j in 1..i
loop
dbms_output.put('*');
end loop;
dbms_output.new_line;
end loop;
end;
/


 
Output:
 

B)
    * * * * *
    * * * *
    * * *
    * *
    *
Program:
declare
n number:=5;
i number;
j number;
begin
for i in reverse 1..n
loop
for j in 1..i
loop
dbms_output.put('*');
end loop;
dbms_output.new_line;
end loop;
end;
/

Output:
 

C)         *
          * * *
       * * * * *
     * * * * * * *
  * * * * * * * * *

Program:
declare
n number:=10;
i number:=1;
j number;
k number;
begin
while i<n
loop
j:=1;
while j<n-i
loop
dbms_output.put(' ');
j:=j+2;
end loop;
for k in 1..i
loop
dbms_output.put('*');
end loop;
dbms_output.new_line;
i:=i+2;
end loop;
end;
/ 





Output:
                  

D)* * * * **
      * * * *
	   ***
    **
*

	Program :
	declare
i number:=9;
j number;
k number;
begin
while i>=1
loop
j:=9;
while j>i
loop
dbms_output.put(' ');
j:=j-2;
end loop;

for k in 1..i
loop
dbms_output.put('*');
end loop;
dbms_output.new_line;
i:=i-2;
end loop;
end;
/      
Output:
 
	E)* * * * *
 	       * * * *
		* * *
		   * *
                          * 
Program: 
declare
n number:=5;
i number;
j number;
k number;
begin
for i in reverse 1..n
loop
for j in 1..n-i
loop
dbms_output.put(' ');
end loop;

for k in 1..i
loop
dbms_output.put('*');
end loop;
dbms_output.new_line;
end loop;
end;
/
 
Output:
 
	
 
F)                        *
		     * *
		   * * *
 		* * * *
                 * * * * *
	Program:
	declare
n number:=5;
i number;
j number;
k number;
begin
for i in 1..n
loop
for j in 1..n-i
loop
dbms_output.put(' ');
end loop;
for k in 1..i
loop
dbms_output.put('*');
end loop;
dbms_output.new_line;
end loop;
end;
/
OUTPUT:
 
