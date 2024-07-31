FROM devkitpro/devkitppc:20240702
ARG GAME_VERSION

ENV PATH="${PATH}:/opt/devkitpro/devkitPPC/bin"
ENV GAME_VERSION=${GAME_VERSION}

RUN apt-get update && apt-get install make

WORKDIR /build

ENTRYPOINT make GAME_VERSION=${GAME_VERSION}