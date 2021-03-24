all:server client
server:server.c
	gcc $< -o $@

client:client.c
	gcc $< -o $@

.PHONY:clean
clean:
	rm -f server
	rm -f client
