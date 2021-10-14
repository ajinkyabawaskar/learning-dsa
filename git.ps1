$commitMessage = $args[0]
git pull origin master
git add .
git commit -m "$commitMessage"
git push
