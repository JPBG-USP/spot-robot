# Here we have the script that build our spotnoetic

# Check if you are on the right directory to run the build
if [[ $PWD = *spot-robot ]]; then
    cd docker
elif [[ ! $PWD = *spot-robot/docker ]]; then
    echo -e "You must be in either 'spot-robot' or the 'spot-robot/docker' directory to run this command."
    echo -e "Você precisa estar na pasta 'spot-robot' ou em 'spot-robot/docker' para rodar esse commando."
    return 1
fi

# Configs da build
# -f Dockerfile.spotnoetic  (-f ou --file informa o arquivo a ser dado o build)
# -t spot-robot:spotnoetic  (-t ou --tag é para o repositório e para a tag respectivamente, separados por dois pontos)
# --rm (Ouvi que é bom deixar, acho que remove as versões de builds antigas)

docker build \
    --network=host \
    -f Dockerfile.spotnoetic \
    -t spot-robot:spotnoetic \
    --rm \
    .