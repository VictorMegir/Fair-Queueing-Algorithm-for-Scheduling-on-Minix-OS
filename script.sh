#!/bin/sh
j=0
  while [ 1 ] ; do
  i=0
  while [ $i -lt 10 ] ; do
    i=`expr $i + 1`
  done
  j=`expr $j + 1`
  echo $j
  sleep 1
done
