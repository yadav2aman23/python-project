!#/bin/bash
'''for name in AMAN kumar yadav
do 
    echo "Hello $name"
done'''

for ip in google.com facebook.com 
do 
    echo "Cheacking $ip "
    ping -c 1 $ip
done