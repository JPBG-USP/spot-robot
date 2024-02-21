# Here we have the script that build our spotnoetic

# Check if you are on the right directory to run the build
if [[ $PWD = *spot-robot ]]; then
    cd docker
elif [[ ! $PWD = *spot-robot/docker ]]; then
    echo -e "You must be in either 'spot-robot' or the 'spot-robot/docker' directory to run this command."
    return 1
fi

docker build \
    --network=host \
    -f Dockerfile.spotnoetic \
    -t spot-robot:spotnoetic \
    --rm \
    .