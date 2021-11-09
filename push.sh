#!/bin/sh

git add *
git commit -m "$1"
git push

git rm -f "push.sh"
git commit -m "delete push"
git push
