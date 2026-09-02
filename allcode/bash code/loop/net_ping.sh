#!/bin/bash
for ip in google.com facebook.com
do 
    echo "Cheking the ip $ip"
    if  ping -c 1 -w1 "$ip" > /dev/null 2>&1
        echo "$ip is up "
    then
    else
        echo "$ip is down"
    fi
done