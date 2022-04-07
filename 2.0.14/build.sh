#!/bin/bash

# Copyright © 2021 Pittsburgh Supercomputing Center.
# All Rights Reserved.

cd diamond-2.0.14
docker build -t icaoberg/diamond:2.0.14 .
cd ..

IMAGE=singularity-diamond-2.0.14.sif
DEFINITION=Singularity

if [ -f $IMAGE ]; then
	rm -fv $IMAGE
fi

sudo singularity build $IMAGE $DEFINITION

if [ -f $IMAGE ]; then
	exit 0
else
	exit 1
fi
