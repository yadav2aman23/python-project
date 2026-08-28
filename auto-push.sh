#!/bin/bash

echo "Auto GitHub Push started..."
echo "Watching: $(pwd)"

inotifywait -m -r \
  -e close_write,create,delete,move \
  --exclude '(^|/)(.git|.venv|__pycache__)(/|$)' \
  . |
while read -r directory events filename
do
    echo "Change detected: $directory$filename"

    git add .

    if git diff --cached --quiet; then
        echo "No changes to commit."
    else
        git commit -m "Auto update: $(date '+%Y-%m-%d %H:%M:%S')"
        git push origin main
        echo "✓ Pushed to GitHub"
    fi
done
