# 参考 : https://news.mynavi.jp/techplus/article/c-for-windows-14/
CMD=	fizzbuzz.exe
SRCS=	main.c fizzbuzz.c
OBJS=	$(SRCS:.c=.o)

CFLAGS+=-g

CC= gcc

build: $(CMD)

$(CMD): $(OBJS)
	$(CC) $(CFLAGS) -o $(CMD) $(OBJS)

.c.o:
	$(CC) -c $< -o $@

clean:
	del $(CMD)
	del "*.o"
	del "*.ilk"
	del "*.pdb"