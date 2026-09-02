#!/bin/bash
for domain in google.com facebook.com
do
    echo "Chiking the $domian "
    ip = $(dig + short "$domian"| head -n 1)
    if [-n "$ip"]
    then
        echo "$domian $ip"
    else 
        echo "$domian DNS Fail"
    fi
        echo "_______________"
done