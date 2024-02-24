# Here you will find the commands to inicialize the docker image the rigth way
# Aqui você vai encontrar os comandos para inicializar a imagem docker do jeito bom

if [[ $PWD = *spot-robot ]]; then

    #                       Configs para inicialização do container
    #                                -it    (Terminal interativo)
    #                             --user    (Setando qual usuário do container vc vai usar)
    #        --network=host e --ipc=host    (Pra ter acesso a internet)
    #               -v /dev/dri:/dev/dri    (Nesse caso to dando acesso a todas as pastas de driver, assim ele tem acesso ao driver de video do meu PC)
    #    -v $PWD/ros_ws:/home/ros/ros_ws    (Pra ter acesso a pasta de ROS do robo)
    #                -e DISPLAY=$DISPLAY    (Setando pra aparecer no display que estamos usando atualmente)
    #              spot-robot:spotnoetic    (A imagem docker que queremos)

    docker run -it \
    --user ros \
    --network=host \
    --ipc=host \
    -v /dev/dri:/dev/dri \
    -v $PWD/ros_ws:/home/ros/ros_ws \
    -e DISPLAY=$DISPLAY \
    spot-robot:spotnoetic

elif [[ ! $PWD = *spot-robot/docker ]]; then
    echo -e "You must be in 'spot-robot' directory to run this command."
    echo -e "Você deve estar na pasta 'spot-robot' para rodar esse comando."
    return 1
fi

# Aqui abaixo tem um comando pra quem tem placa da Nvidia eu acho, não funcionou no meu pq eu não uso esse X11-unix (minha teoria), mas
# você pode tentar.
# docker run -it --user ros --network=host --ipc=host -v /tmp/.X11-unix:/tmp/.X11-unix:rw -e DISPLAY=$DISPLAY spot-robot:spotnoetic