#!/bin/bash
################################################################################
## NAME: candp.sh
## PURPOSE: Simplify git adds. This will add, commit, and push ALL changes to
##          files in a given git repo.
## DATA DICTIONARY:
##    $1: the commit comment
## NOTES: Remember to add the ssh key to the github repo.
################################################################################
git add -A
git commit -m "$1"
git push -uv origin master
