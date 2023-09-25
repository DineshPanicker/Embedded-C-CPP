#!/bin/sh

echo "Is it morning? please ans yes or no"

read timeofday

if[ $timeofday = "yes" ]; then
	echo "Good Morning"
else
	echo "Good Evening"
fi

exit 0
