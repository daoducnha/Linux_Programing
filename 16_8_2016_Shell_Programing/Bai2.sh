#!/bin/sh
 for direc in $1/*
 do
 	if [ -d $direc ]
 	then 
 		echo $direc
 	fi
 done
 exit 0 