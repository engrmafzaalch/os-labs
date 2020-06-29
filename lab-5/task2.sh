echo "Enter slary"
read salary

if [ $salary -lt 1500 ]
then 
echo "Your HRA is `expr 0.10*$salary | bc`"
else
echo "Your HRA is `expr 0.20*$salary | bc`"
fi

