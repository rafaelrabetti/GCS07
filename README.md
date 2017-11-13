# Atividade 7: deb

Para testar a atividade utilizer os comandos

```
docker build -t hellogcs:latest .
docker run --name gcs hellogcs:latest
```

A saída do `docker run` deve ser:

```
Reading from /usr/var/hellogcs/assets/settings.txt ...
Hello, YOU
```

Dentro do Dockerfile todos os comando de criação e construção do pacote já
são utilizados na ordem correta.
