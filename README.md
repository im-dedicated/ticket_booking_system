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
This project is a Python Flask app, so it cannot be deployed with GitHub Pages. Use a Python-friendly hosting service instead.

### Recommended deployment services
- Render: create a new Web Service, connect your GitHub repository, and set the start command to `python app.py`.
- Railway: connect your repository and deploy with the same command.
- Fly.io: install the Fly CLI, create a new app, and deploy the repository.

### Important notes
- Do not use GitHub Pages for this app. GitHub Pages only supports static HTML/CSS/JS sites.
- This project uses SQLite, which stores data in a file. For production, consider switching to a hosted database if you need persistence across deploys.

### Sample Render workflow
1. Push your repository to GitHub.
2. Create a new Web Service on Render.
3. Connect your GitHub repo.
4. Set "Root Directory" to `/` and "Start Command" to:
   ```bash
   python app.py
   ```
5. Deploy the service.
