#!/bin/sh
#set -x

echo "\n"
while [ 1 ] ; do
	printf "\033[2A"
	printf "\033[0m"
	var=$(( $RANDOM % 2 ))
	if [ $var -eq 1 ] ; then
			printf "\033[2m\c"
	fi
	
	var=$(( $RANDOM % 2 ))
	if [ $var -eq 1 ] ; then
			printf "\033[3m\c"
	fi
	
	var=$(( $RANDOM % 2 ))
	if [ $var -eq 1 ] ; then
			printf "\033[1m\c"
	fi
	
	var=$(( $RANDOM % 3 ))
	if [ $var -eq 0 ] ; then
			printf "\033[40m\c"
	elif [ $var -eq 1 ] ; then
			printf "\033[41m\c"
	else
			printf "\033[43m\c"
	fi

	var=$(( $RANDOM % 4 ))
	if [ $var -eq 0 ] ; then
			var2=30
	elif [ $var -eq 1 ] ; then
			var2=31
	elif [ $var -eq 2 ] ; then
			var2=33
	else
			var2=37
	fi
	var=$(( $RANDOM % 2 ))
	if [ $var -eq 0 ] ; then
			var2=$(( $var2 + 60 ))
	fi
	printf "\033[${var2}m"

	var=$(( $RANDOM % 4 )) #i wanted to do 10ish sSzZxXvVnNmM^&$,.?!
	if [ $var -eq 0 ] ; then
			echo "s"
	elif [ $var -eq 1 ] ; then
			echo "S"
	elif [ $var -eq 2 ] ; then
			echo "z"
	else
			echo "Z"
	fi

done




#var=0
#var2=40
#while [ $var -lt 5 ] ; do
#		var2=41
#		while [ $var2 -lt 44 ] ; do
#				var3=31
#				while [ $var3 -lt 34 ] ; do
#						echo "\033[$var;$var2;$var3\c"
#						echo "m($var;$var2;$var3) \c"
#						var3=$(( $var3 + 2 ))
#						sleep .1
#				done
#				var3=91
#				while [ $var3 -lt 94 ] ; do
#						echo "\033[$var;$var2;$var3\c"
#						echo "m($var;$var2;$var3) \c"
#						var3=$(( $var3 + 2 ))
#						sleep .1
#				done
#				echo ""
#				var2=$(( $var2 + 2 ))
#		done
#		var=$(( $var + 1 ))
#done
