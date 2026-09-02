#!/bin/bash

for domain in google.com facebook.com
do 
    echo "Checking the $domain "
    ip = $(dig + short "$domain" | head -n 1)
    if[-n "$ip"]
    then 
        echo "$domain $ip "
    else   
        echo "$domain DNS Faill "
    fi 
        echo "_____________________"
done