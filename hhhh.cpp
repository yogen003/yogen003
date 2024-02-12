1.Write a shell script for addition, subtraction, multiplication, division, modulo division?

#!/bin/bash
echo author name Yogen
echo program for Arithmetic operation +,-,*,/,%
echo Enter the first number
read a
echo Enter the second number 
read b
echo addition :`expr $a + $b`
echo subtraction :`expr $a - $b` echo multiply : `expr $a \* $b` echo division :`expr $a / $b` 
echo module : `expr $a % $b`
output:

 
2.Write a Linux shell script to check the given year is leap year?

#!/bin/bash
echo author name Yogen echo leap year program 
echo Enter any year
read y
con1=`expr $y % 4`
 con2=`expr $y % 100`
  con3=`expr $y % 400`
 if [ $con1 -eq 0 ]
then
if [ $con2 -eq 0 ] then
if [ $con3 -eq 0 ] then
echo year is leap year.
else
echo year is not leap.
fi
else
echo year is leap year.
fi
else
echo year is not leap year. 
fi
output:

 
3.Write a Linux shell script to check given number is prime or not?

#!/bin/bash
echo author name Yogen
echo program for prime number
echo Enter any number
read n c=0
for ((i=1;i<=$n;i++)); 
do
if [ `expr $n % $i` -eq 0 ] then
c=`expr $c + 1` fi
done
if [ $c -eq 2 ] then
echo $n is prime number 
else
echo $n is not prime number 
fi

output:

 
4.Write a Linux shell script for Fibonacci series?
#!/bin/bash
echo author name Yogen 
echo fibonacci series 
echo Enter number
read n 
n1=0 
n2=1
echo fibonacce series is: 
echo $n1
echo $n2
for ((i=2;i<n;i++)); 
do
temp=`expr $n1 + $n2` 
echo $temp
n1=$n2 
n2=$temp done
output:

 
5.Write a Linux shell script to calculate factorial of given number?

#!/bin/bash
echo author 
echo program for factorial number 
echo Enter number
read n fact=1
for ((i=1;i<=n;i++)); do
fact=`expr $fact \* $i` done
echo factorial of $n is $fact output:
 
 
6.Write a Linux shell script for Armstrong number?
#!/bin/bash

echo author Yogen
echo program for Armstrong number 
echo Enter number
read a check=$a sum=0
while [ $check -ne 0 ] do
rem=`expr $check % 10` crem=`expr $rem \* $rem \* $rem` sum=`expr $sum + $crem` check=$((check/10))
done
if [ $sum -eq $a ] then
echo $a is armstrong number else
echo $a is not armstrong numbers fi
output:

 
7.Write a Linux shell script to check largest no of three number?
#!/bin/bash

echo author Yogen echo largest no echo enter a
read a
echo enter b read b
echo enter c read c
echo largest no is:
if [ $a -gt $b ] && [ $a -gt $c ] then
echo $a
elif [ $b -gt $a ] && [ $b -gt $c ] then
echo $b else echo $c fi


Output :-

 
8.Write a shell script to see date,time,username,current directory?
#!/bin/bash
echo Hello, `logname` echo Current date is `date` echo User is `whoami`
echo Current direcotry `pwd` output:
 
 
9.Write a Linux shell script to swapping variable?
#!/bin/bash
  echo author Yogen
echo swaping two number echo enter first number read n1
echo enter second number read n2
echo "before swapping" echo "n1: $n1"
echo "n2: $n2" n3=$n1 n1=$n2 n2=$n3
echo "After swapping, numbers are: " echo "n1: $n1"
echo "n2: $n2" output:
 
 
10.Write a Linux shell script to check given no odd or even?
#!/bin/bash
echo author Yogen
echo program of odd or even echo Enter number
read n
m=`expr $n % 2` if [ $m -eq 0 ] then
echo $n number is even number else
echo $n number is odd number fi
output:

 

11.Write shell script to find multiplication table using for loop?
#!/bin/bash

#!/bin/bash
echo author Yogen
echo multiplication table echo enter number
read n for((i=1;i<=10;i++)) do
echo `expr $i \* $n` done
echo "" output:
 
 
12.Write a Linux shell script to print employee payroll (basic, DA, HRA, PF, Gross salary, Net Salary)?
#!/bin/bash
echo author Yogen echo Employee Payroll echo enter empname read e_name
echo Enter DA read D
echo Enter HRA read HRA
echo enter PF read P
echo e_name=$e_name echo DA=$DA
echo HRA=$HRA echo PF=$P
Gross_Salary=`expr $DA + $HRA` Net_salary=`expr $Gross_Salary - $P` echo Gross_Salary: $Gross_Salary echo Net_Salary: $Net_salary
output:

 
13.Write a Linux shell script to perform all arithmetic operation using command line argument?
#!/bin/bash
echo author Yogen
echo airthmetic operation echo enter first number read n
echo enter second number read m
val=`expr $n + $m` echo "n + m : $val" val=`expr $n - $m` echo "n - m : $val" val=`expr $n \* $m` echo "n * m : $val" val=`expr $n / $m` echo "n / m : $val" val=`expr $n % $m` echo "n % m : $val"

Output :-

 
14.Write a shell script to accept character and check for following?
•	If user enter character (A-Z) then show upper case letter.
•	If user enter character (a-z) then show lower case letter.
•	If user enters digital no (0-9) then show digital number.
*, $, #, @ show its special characterecho author Yogen
#!/bin/bash
echo enter value read v
if [[ $v == [A-Z] ]];
then
echo upper case character elif [[ $v == [a-z] ]];
then
echo lower case character elif [[ $v == [1-9] ]];
then
echo digital number else
echo special character fi
output:

 
15.Write a Linux shell script show various system configurations?
•	Currently log user and His/her login name.
•	Your current shell.
•	Your current directory.
•	Your operating system type.
•	Show mouse setting.
•	Show keyboard
•	Show network setting.
•	Show Path

#!/bin/bash
Echo author Yogen
echo program to show various system configuration echo "current log user name `whoami`"
echo "current shell $SHELL" echo "current directory `pwd`"
echo "current operating system type uname -a" echo "path setting $PATH"
echo "current logged number of user `id`" output:
 
16.Write a shell script to check given name is a file or a directory or special file or not?

#!/bin/bash
$ cat fd.sh
echo author Yogen
echo file or directory or special or not echo enter file name
read f
if [ -d $f ]; then
echo the provide argument is a directory elif [ -f $f ];
then
echo the provide argument is file else
echo the provide argument is special file ot not fi

output:-

 
17.Write a shell script to determine whether given file exist or not, existing file name supplied by command line argument also check for sufficient no of command line argument?

#!/bin/bash
$ cat exist.sh echo author Yogen
echo file exist or not echo enter file name read f
if [ -f $f ]; then echo "file is exixt" else
echo "file is not exist" fi
Output :-

 
18.Write shell script to copy the content is one file to another file?

#!/bin/bash
echo author Yogen
echo "this is my file" > file.txt cp ni.txt ns.txt

Output :-



 
19.Write a shell script to print addition of given of all digits?

#!/bin/bash
echo author Yogen
echo addition of all digit echo enter the digits read n
g=$n s=0
while [ $n -gt 0 ] do
k=$(($n % 10))
n=$(($n / 10))
s=$(($s + $k)) done
echo sum of digit of $g is : $s

Output :-


 
20.Write a shell script to search element present in list or not. (Binary & Linear Search)
#!/bin/bash
echo author Yogen
echo binary linear search echo enter number of element read n
echo enter all element seperated by space read s
echo enter element that u want to search read r
FOUND=NOTFOUND
for e in $s do
if [ $r == $e ]; then
echo successfully search FOUND=FOUND
break fi done
if [ $FOUND == NOTFOUND ];
then
echo not found fi
Output:-

 
21.Write a shell script for bubble & selection sort
#!/bin/bash
$ cat sort.sh
echo author Yogen echo bubble sort arr=(10 20 70 40 9 4)
echo ${arr[*]} for((i=0;i<6;i++)) do
for((j=0;j<6-i-1;j++)) do
if [ ${arr[j]} -gt ${arr[$((j+1))]} ] then
temp=${arr[j]} arr[$j]=${arr[$((j+1))]} arr[$((j+1))]=$temp
fi done done
echo array in sorted order echo ${arr[*]}
output :-

 
22.Write a Linux shell script to sort the given no in ascending or descending orders?

#!/bin/bash
$ cat asc.sh
echo author Yogen
echo ascending or descending number=(10 4 -7 2 -1 -70 50 20)
for((i=0;i<${#number[@]};i++)) do for((j=0;j<${#number[@]};j++)) do
if [[ ${number[$j]} -lt ${number[$i]} ]] then
temp=${number[$i]} number[$i]=${number[$j]} number[$j]=${temp}
fi done done
for n in "${number[@]}" do
echo "$n" done
Output :-

 
23.Write a Linux shell script to implement read, write and execute permission?
#!/bin/bash
echo author Yogen echo enter file name read f
chmod o+wx $f
echo file permision has been changed

Output:-

 
24.Write a Linux shell script to print the following pattern?
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
#!/bin/bash
echo author Yogen echo pattern 3
echo Enter number of row read n
echo the pattern is : i=1
while [ $i -le $n ] do
j=1
while [ $j -le $i ] do
echo -ne $i" " j=`expr $j + 1` done
echo " " i=`expr $i + 1` done
output:

 
25.Write a Linux script to print the following pattern using for loop?
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
#!/bin/bash
echo author Yogen echo the pattern is: n=4
i=1
while [ $i -le $n ] do
j=1
while [ $j -le $i ] do
echo -ne " * " j=`expr $j + 1` done
echo " " i=`expr $i + 1` done
i=`expr $n - 1` while [ $i -ge 1 ] do
j=$i
while [ $j -ge 1 ] do
echo -ne " * " j=`expr $j - 1` done
echo " " i=`expr $i - 1` done Output :-

 
26.Write a Linux shell script to implement break & continue statement?

#!/bin/bash
Break statement
echo author Yogen echo break statement echo enter any number read n
for ((i=1;i<n;i++)) do
if [ $i -eq 6 ]; then
break fi
echo $i done

Output :-

 
	Continue statement
echo author Yogen
echo continue statement echo enter any number read n
for ((i=1;i<n;i++)) do
if [ $i -eq 4 ]; then continue
fi
echo $i done

Output :-

 
27.Write a Linux shell script to calculate area of circle & rectangle?

#!/bin/bash
echo author Yogen
echo area of circle and rectangle echo enter r of circle
read r
echo enter l of rectangle read l
echo enter b of rectangle read b
echo enter value of pi read p
echo area of circle `expr $p \* $r \* $r` echo area of rectangle `expr $l \* $b`

Output :-

 

28.Write a Linux shell script to count no of file in directory?
#!/bin/bash
echo author Yogen
echo count no of directory echo number of file
echo $(find $@ -type f | wc -l)

Output :-

 
29.Write a shell script to generate all combination of 1, 2 and 3.
#!/bin/bash
echo author Yogen
echo combination of 1 2 3
for i in 1 2 3 do
for j in 1 2 3 do
for k in 1 2 3 do
echo $i $j $k done
done done

Output :-

 
30.Write a shell script to check given string or number is palindrome or not?
#!/bin/bash
rev=0
while [ $n -gt 0 ] do
a=`expr $n % 10 ` n=`expr $n / 10 ` rev=`expr $rev \* 10 + $a` done
echo reverse of $num is $rev if [ $num -eq $rev ]
then
echo The number $num is palindrome else
echo The number $num is not palindrome
fi
}
r=`niku $n` echo $r
output:

