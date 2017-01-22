#!/bin/bash
var=29
var2=91
echo "\033[2m"
while [ $var2 -lt 1000 ] ; do
		var=89
		while [ $var -lt 100 ] ; do
				echo "\033[$var2;$var\c"
				echo "m($var2;$var) \c"
				var=$(( $var + 1 ))
				sleep .1
		done
		echo ""
		var2=$(( $var2 + 1 ))
done
