/*
 * Copyright (c) 2012 ASMlover. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list ofconditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materialsprovided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __STRING_HEADER_H__
#define __STRING_HEADER_H__

#include <stdarg.h>

extern char* string_sub(const char* s, int i, int j);
extern char* string_dup(const char* s, int i, int j, int n);
extern char* string_cat(const char* s1, int i1, int j1, const char* s2, int i2, int j2);
extern char* string_vcat(const char* fmt, ...);
extern char* string_reverse(const char* s, int i, int j);
extern char* string_map(const char* s, int i, int j, const char* from, const char* to);

extern int string_pos(const char* s, int i);
extern int string_len(const char* s, int i, int j);
extern int string_cmp(const char* s1, int i1, int j1, const char* s2, int i2, int j2);

extern int string_chr(const char* s, int i, int j, int c);
extern int string_rchr(const char* s, int i, int j, int c);
extern int string_upto(const char* s, int i, int j, const char* set);
extern int string_rupto(const char* s, int i, int j, const char* set);
extern int string_find(const char* s, int i, int j, const char* search);
extern int string_rfind(const char* s, int i, int j, const char* search);

extern int string_any(const char* s, int i, const char* set);
extern int string_many(const char* s, int i, int j, const char* set);
extern int string_rmany(const char* s, int i, int j, const char* set);
extern int string_match(const char* s, int i, int j, const char* match);
extern int string_rmatch(const char* s, int i, int j, const char* match);

extern void string_fmt(int code, va_list* app, 
  int (*visit)(int, void*), void* arg, 
  unsigned char flags[], int width, int precision);

#endif  /* __STRING_HEADER_H__ */
