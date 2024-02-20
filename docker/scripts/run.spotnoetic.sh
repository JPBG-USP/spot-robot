# Here you will find the commands to have a good ininicialization of docker
# docker run -it --user ros --network=host --ipc=host -v /tmp/.X11-unix:/tmp/.X11-unix:rw -e DISPLAY=$DISPLAY spot-robot:spotnoetic
docker run -it --user ros --network=host --ipc=host -v /dev/dri:/dev/dri -e DISPLAY=$DISPLAY spot-robot:spotnoetic