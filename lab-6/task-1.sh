calculator(){
    
    echo "select one"
    echo "1. Add"
    echo "2. Subtraction"
    echo "3. Multiplcation"
    echo "4. Division"
    echo "5. Exit"
    read choice
    if [ $choice -eq 5 ] 
    then 
        exit
    fi

        echo "Enter first numebr: "
        read num1
        
        echo "Enter Second numebr: "
        read num2

    case "$choice"  in
    1)
        expr $num1 + $num2
        ;;
    2)
        expr $num1 - $num2
        ;;
    3)
        expr $num1 \* $num2
        ;;
    4)
        if [ $num2 -eq 0 ]
        then  
            echo "number cannot be divided by 0"
        else
            expr $num1 / $num2
        fi
        
    ;;
    *)
        echo "Invaloid Selection"
    esac


}
# i=1
while(i=1)
do
calculator
done