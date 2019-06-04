CFLAGS = -I../src/ -g -O0 -Wall -Werror -Wextra

OBJS=sample.o

TARGET=sample

%.o: %.c $(INCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -rf $(TARGET) *.o