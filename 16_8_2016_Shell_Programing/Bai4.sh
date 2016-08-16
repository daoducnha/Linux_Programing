#!/bin/sh
flag=1
matkhau=123abc
echo "$matkhau"
while [ $flag -eq 1 ]
do
	echo "nhap mat khau"
	read mk
	if [ $mk = $matkhau ] 
	then
		flag=0
	else 
		echo "mat khau sai"
	fi
done