inventry=["apple","orange","banna","kela"]

inventry.append("aam")
inventry.remove("apple")

iteam="aam"

if iteam in inventry:
    print(f"{iteam} are in stock")
else:
    print(f"{iteam} are not stock")

print("inventry_list")
for iteam in inventry:
    print(f"-{iteam}")
