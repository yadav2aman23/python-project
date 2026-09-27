to_do_list=["buy some iteam","clean the leptop","pay bills"]

to_do_list.append("schedole meeting")

to_do_list.append("Go to for run")

to_do_list.remove("clean the leptop")


if "pay bills" in to_do_list:
    print("dom't forget to pay the utility bills")
print("to Do list reminges")
for task in to_do_list:
    print(f"-{task}")