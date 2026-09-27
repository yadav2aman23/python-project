feedback=["grate","good","to_good","not_bad"]

feedback.append("not happy for you service")

postive_feedback=sum(1 for comment in feedback if "greate" in comment.lower() or "to good" in comment.lower())

print(f"postive feedback count:{postive_feedback}")

print("user feedback")
for comment in feedback:
    print(f"-{comment}")