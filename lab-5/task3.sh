if [ $# -ne 2 ]
then 
echo "Invalid number of argument"
else
val1=$1
val2=$2
echo "sum of $val1 and $val2 = $val1 + $val2 =  `expr $val1 + $val2`" 
echo "1. Exit 2. Pass argruments"
read condition
if [ $condition -eq 1 ]
then 
exit
fi 
fi

i=1 
while(i==1)
do
echo "Enter first arguments"
read val1
echo "Enter second arguments"
read val2
echo "sum of $val1 and $val2 = $val1 + $val2 =  `expr $val1 + $val2`" 
echo "1. Exit 2. Pass argruments"
read condition
if [ $condition -eq 1 ]
then 
exit
fi 

done