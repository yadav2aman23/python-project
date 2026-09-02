#!/bin/bash
for ip in google.com facebook.com
do 
    echo "Cheking the ip $ip"
    if  ping -c 1 -w1 "$ip" > /dev/null 2>&1
        
    then
        echo "$ip is up "
    else
        echo "$ip is down"
    fi
done