#!/bin/sh


echo "$1" | awk '{ for (i=NF; i>1; i--) printf("%s ",$i); print $1; }'




