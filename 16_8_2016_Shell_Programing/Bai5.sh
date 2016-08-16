#!/bin/sh
echo "so 3 la so: \nA,So chinh phuong\nB, So nguyen to \nC, So chan"
read traloi
case $traloi in
	"a" | "A" )
		echo "Ban sai roi"
		;;
	"b" | "B")
		echo "Chuc mung ban"
		;;
	"c" | "C" )
		echo "Ban sai roi"
		;;
	*)
		echo "Ban nhap sai lua chon"
		;;
	
esac