
from flask import Flask

app = Flask(__name__)

@app.route("/")
def home():
    return """
    <html>
    <head>
        <title>My Python Web App</title>
    </head>
    <body style="text-align:center; font-family:Arial;">
        <h1>Welcome to My Python Web Application!</h1>
        <h2>Cloud Computing Practical</h2>
        <p>Successfully deployed using GitHub and Render.</p>
    </body>
    </html>
    """

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=10000)
