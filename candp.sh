#!/bin/bash

git add -A
git commit -m "$1"
git push -uv origin master
