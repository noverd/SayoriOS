#pragma once
#include <libk/stdint.h>

size_t strlen(const char *str);
void *memcpy(void *destination, const void *source, size_t n);
void *memset(void *destination, int c, size_t n);
int strcmp(const char *str1, const char *str2);char *strcpy(char *dest, const char *src);
int memcmp(const void *s1, const void *s2, size_t n);
size_t str_bksp(char *str, char c);
char *strpbrk(const char *s, const char *accept);
size_t strspn(const char *s, const char *accept);
int strncmp(const char *s1, const char *s2, size_t num);
char *strtok(char *s, const char *delim);
char *strcat(char *s, const char *t);

uint32_t atoi(char s[]);

int32_t memcmp(const void*, const void*, size_t);
void* memmove(void* , void* , size_t);
void *memset(void *destination, int32_t c, size_t n);
void* memcpy(void*, const void*, size_t);
void substr(char* dest, char* source, int from, int length);
char *strchr(const char *_s, int _c);
char *strstr(const char *_haystack, const char *_needle);
void strtolower(char* as);
void strtoupper(char* as);
