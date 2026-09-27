def is_strong_password(passwords):
    if len(passwords)<8:
        return False
    if not any(char.isdigit() for char in passwords):
        return False
    if not any(char.islower() for char in passwords):
        return False
    if not any(char.isupper() for char in passwords):
        return False
    if not any(char  in '!@#$%^&*()' for char in passwords):
        return False
    return True


print(is_strong_password('sdchsdghvvd'))
print(is_strong_password('sdhvhvSDD7841#@'))
    