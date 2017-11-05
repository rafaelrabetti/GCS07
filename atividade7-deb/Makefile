CC = g++

prefix = /usr/local
bindir = $(prefix)/bin
vardir = $(prefix)/var/hellogcs

assetsdir = assets

all: hellogcs

hellogcs:
	$(CC) -o hellogcs main.cpp -DASSETS_ROOT_PATH="\"$(vardir)/$(assetsdir)\""

clean:
	rm -f hellogcs

install: all
	install hellogcs $(DESTDIR)$(bindir)
	mkdir -p $(DESTDIR)$(vardir)
	cp -r $(assetsdir) $(DESTDIR)$(vardir)

uninstall:
	rm -r $(DESTDIR)$(vardir)
	rm $(bindir)/hellogcs
