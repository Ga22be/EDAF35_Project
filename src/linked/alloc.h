#ifndef ALLOC_H
#define ALLOC_H

void* malloc(size_t size);
void* free(void *ptr);
void* calloc(size_t nmemb, size_t size);
void* realloc(void *ptr, size_t size);

typedef struct list_t list_t;

struct list_t {
  size_t  size;
  list_t  *next;
  char    memory[];
}

list_t get_avail(void);
void print_free();
void print_memory();

#endif
