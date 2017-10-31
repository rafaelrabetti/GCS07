from debian:stretch-slim

run apt-get update && \
    apt-get install -y build-essential devscripts debhelper

run mkdir /hellogcs-1.0 /build-dist

copy . /hellogcs-1.0

workdir /build-dist

run tar -zcvf hellogcs_1.0.orig.tar.gz /hellogcs-1.0   && \
    tar -zxvf hellogcs_1.0.orig.tar.gz                 && \
    cd hellogcs-1.0                                    && \
    cp -r dist/debian debian                           && \
    debuild -us -uc                                    && \
    dpkg -i ../hellogcs_1.0-1_amd64.deb

workdir /

cmd hellogcs
