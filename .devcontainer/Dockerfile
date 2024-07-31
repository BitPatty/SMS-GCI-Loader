FROM devkitpro/devkitppc:20240702

RUN useradd -ms /bin/bash dev \
    && usermod -aG sudo dev

RUN echo '%sudo ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers

ENV PATH="${PATH}:/opt/devkitpro/devkitPPC/bin"

CMD ["sleep", "infinity"]