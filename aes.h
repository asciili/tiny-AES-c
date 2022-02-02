#ifndef AES_H
#define AES_H

#include <stdint.h>
#include <stddef.h>

#define AES_BLOCKLEN 16 // Block length in bytes - AES is 128b block only

#define AES_KEYLEN 16 // Key length in bytes
#define AES_KEYEXPSIZE 176

typedef struct AES_ctx
{
  uint8_t RoundKey[AES_KEYEXPSIZE];
  uint8_t Iv[AES_BLOCKLEN];
} AES_CTX_T;

extern void aesInit(AES_CTX_T *ctx, const uint8_t *key, const uint8_t *iv);
extern void aesCtrEncode(struct AES_ctx *ctx, uint8_t *buf, size_t length);

#endif // AES_H
