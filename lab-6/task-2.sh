echo -n "Enter number "
read num
# echo 0
# echo 1
num1=0
num2=1
for((i=0;$i<$num;i++))
do
    echo -n "$i.  "
    echo "$num1 "
    fn=$((num1 + num2)) 
    num1=$num2
    num2=$fn 
done
