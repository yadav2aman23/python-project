def conv_tem(temp,unit):
    if unit=='c':
        return temp *9/5 +32
    elif unit=='f':
        return (temp -32) *9/5
    else:
        return None

print(conv_tem(25,'c'))
print(conv_tem(77,'f'))
