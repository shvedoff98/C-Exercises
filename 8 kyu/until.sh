# simple bash script 
# to show using until loop

#!/bin/sh

read last
a=1

while [ "$a" -lt "$last" ] 
do
    echo $a
    if [ "$a" == 5 ]; then
        echo "It' s 5. Break..."
        break
    else 
        echo "Not yet 5"
    fi
    a=$(expr $a + 1)
done
