#!/bin/sh
echo "nhap so n"
read n

if [ $(($n%2)) -eq 0 ]
then
	echo "$n la so chan"
else 
	echo "$n la so le"
fi
exit 0