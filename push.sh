#!/bin/sh

git add *
git commit -m "$1"
git push -u origin master

git rm -f "push.sh"
git commit -m "delete push"
git push -u origin master
