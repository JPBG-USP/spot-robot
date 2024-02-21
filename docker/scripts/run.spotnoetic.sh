# Here you will find the commands to have a good ininicialization of docker
# docker run -it --user ros --network=host --ipc=host -v /tmp/.X11-unix:/tmp/.X11-unix:rw -e DISPLAY=$DISPLAY spot-robot:spotnoetic
if [[ $PWD = *spot-robot ]]; then
    docker run -it --user ros --network=host --ipc=host -v /dev/dri:/dev/dri -v $PWD/ros_ws:/home/ros/ros_ws:rw -e DISPLAY=$DISPLAY spot-robot:spotnoetic
elif [[ ! $PWD = *spot-robot/docker ]]; then
    echo -e "You must be in either 'spot-robot' directory to run this command."
    return 1
fi
