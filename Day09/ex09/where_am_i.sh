#!/bin/bash	

ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d\  -f2 > nom1

if [ -z nom1 ]
then
	echo "Je suis perdu!"
	rm nom1
else
	cat nom1
	rm nom1
fi
