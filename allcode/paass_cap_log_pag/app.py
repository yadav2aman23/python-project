from flask import Flask, request, render_template

app = Flask(__name__)


@app.route("/", methods=["GET", "POST"])
def login():

    if request.method == "POST":

        email = request.form.get("email", "")
        password = request.form.get("password", "")

        print("\n========== TRAINING SUBMISSION ==========")
        print("Email    :", email)
        print("Password :", password)
        print("==========================================\n", flush=True)

        return render_template(
            "login.html",
            message="Training submission received!"
        )

    return render_template("login.html")


if __name__ == "__main__":
    print("Training server started")
    print("Open: http://127.0.0.1:8000")

    app.run(
        host="0.0.0.0",
        port=8000,
        debug=False
    )
