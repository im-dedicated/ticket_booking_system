# Ticket Booking System

A simple web application for user registration, login, ticket booking, and help desk support, built with Flask and SQLite.

## Features
- User registration and login
- Secure password hashing
- Booking tickets for events
- Help desk support form
- Data stored locally in SQLite

## Run locally
1. Open the project folder.
2. Install dependencies:
   ```bash
   pip install -r requirements.txt
   ```
3. Start the app:
   ```bash
   python app.py
   ```
4. Open http://127.0.0.1:5000 in your browser.

## Run tests
```bash
python -m unittest discover -s tests -v
```

## Upload to GitHub
1. Create a new repository on GitHub.
2. In the project folder, run:
   ```bash
   git init
   git add .
   git commit -m "Initial commit"
   git branch -M main
   git remote add origin https://github.com/<your-username>/<your-repo-name>.git
   git push -u origin main
   ```
3. Open your repository on GitHub to verify the files.

## Deploy online (optional)
For a live deployment, use a service such as Render or Railway.
- Render: create a new Web Service, connect your GitHub repository, and set the start command to `python app.py`.
- Railway: connect the repository and deploy using the same Python app entry point.
