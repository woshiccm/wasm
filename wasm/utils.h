//
//  utils.h
//  wasm
//
//  Created by ming on 2021/9/21.
//  Copyright © 2021 roy. All rights reserved.
//

#ifndef utils_h
#define utils_h

#include <stdio.h>

uint64_t read_LEB_unsigned(const uint8_t *bytes, uint32_t *pos, uint32_t maxbits);

uint64_t read_LEB_signed(const uint8_t *bytes, uint32_t *pos, uint32_t maxbits);

char *read_string(const uint8_t *bytes, uint32_t *pos, uint32_t *result_len);

void *acalloc(size_t nmemb, size_t size, char *name);

void *arecalloc(void *ptr, size_t old_nmemb, size_t nmemb, size_t size, char *name);

#endif /* utils_h */
