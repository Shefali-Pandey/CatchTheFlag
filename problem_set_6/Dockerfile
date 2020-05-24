FROM ubuntu:16.04
MAINTAINER "IST 543"

RUN apt-get -y update && apt-get -y upgrade
RUN apt-get -y install git make cmake build-essential gcc-multilib g++-multilib xinetd libreadline-dev zlib1g-dev
RUN apt-get -y install gdb tmux vim python-pip python3 python3-pip clang
RUN apt-get -y install nmap zsh sudo

RUN pip install --upgrade pip
RUN pip install pwntools
RUN pip3 install --upgrade pip
RUN pip3 install pwntools

# ADD src /src
# WORKDIR /src
# RUN mkdir /build
# RUN gcc -m32 -fno-stack-protector overflow000.c -o /build/overflow000
# RUN gcc -m32 -fno-stack-protector overflow001.c -o /build/overflow001
# RUN gcc -m32 -fno-stack-protector overflow002.c -o /build/overflow002
# RUN gcc -m32 -fno-stack-protector overflow101.c -o /build/overflow101

ADD build /problem_set_6

WORKDIR /problem_set_6

CMD cat /dev/urandom | head -c 64 | md5sum | head -c 32 > /env && bash

# ENTRYPOINT bash
