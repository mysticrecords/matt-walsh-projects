#! /bin/sh

echo "Executing Build Script"

COUNT=0

while [ $COUNT -ne 5 ]; do
    echo "Build in Progress"
    sleep 2
    ((COUNT++))
done

echo "Build complete!"