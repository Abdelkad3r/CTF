void *__fastcall sub_BE7(const char *a1)
{
  unsigned int v1; // ST1C_4
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  char v4; // dl
  _BYTE *v5; // rax
  char v6; // cl
  _BYTE *v7; // rax
  char v8; // cl
  _BYTE *v9; // rax
  char v10; // dl
  _BYTE *v11; // rax
  char v12; // dl
  char *v13; // rax
  char v14; // dl
  _BYTE *v15; // rax
  char v16; // cl
  _BYTE *v17; // rax
  char v18; // cl
  _BYTE *v19; // rax
  char v20; // dl
  char *s; // [rsp+8h] [rbp-88h]
  unsigned int i; // [rsp+10h] [rbp-80h]
  signed int v24; // [rsp+14h] [rbp-7Ch]
  unsigned int v25; // [rsp+18h] [rbp-78h]
  signed __int64 v26; // [rsp+20h] [rbp-70h]
  signed __int64 v27; // [rsp+20h] [rbp-70h]
  signed __int64 v28; // [rsp+20h] [rbp-70h]
  signed __int64 v29; // [rsp+20h] [rbp-70h]
  char *v30; // [rsp+20h] [rbp-70h]
  signed __int64 v31; // [rsp+20h] [rbp-70h]
  signed __int64 v32; // [rsp+20h] [rbp-70h]
  signed __int64 v33; // [rsp+20h] [rbp-70h]
  void *v34; // [rsp+28h] [rbp-68h]

  s = (char *)a1;
  v1 = strlen(a1);
  v34 = malloc(4 * v1 / 3 + 1);
  v26 = (signed __int64)v34;
  for ( i = v1; i > 0x2D; i -= 45 )
  {
    v2 = (_BYTE *)v26++;
    *v2 = 77;
    v24 = 0;
    while ( v24 <= 44 )
    {
      v3 = (_BYTE *)v26;
      v27 = v26 + 1;
      if ( *s >> 2 )
        v4 = ((unsigned __int8)*s >> 2) + 32;
      else
        v4 = 32;
      *v3 = v4;
      v5 = (_BYTE *)v27;
      v28 = v27 + 1;
      if ( 16 * *s & 0x30 )
        v6 = (16 * *s & 0x30) + 32;
      else
        v6 = 32;
      *v5 = v6 | ((unsigned __int8)s[1] >> 4);
      v7 = (_BYTE *)v28;
      v29 = v28 + 1;
      if ( 4 * s[1] & 0x3C )
        v8 = (4 * s[1] & 0x3C) + 32;
      else
        v8 = 32;
      *v7 = v8 | ((unsigned __int8)s[2] >> 6);
      v9 = (_BYTE *)v29;
      v26 = v29 + 1;
      if ( s[2] & 0x3F )
        v10 = (s[2] & 0x3F) + 32;
      else
        v10 = 32;
      *v9 = v10;
      v24 += 3;
      s += 3;
    }
  }
  v11 = (_BYTE *)v26;
  v30 = (char *)(v26 + 1);
  if ( i )
    v12 = (i & 0x3F) + 32;
  else
    v12 = 32;
  *v11 = v12;
  v25 = 0;
  while ( v25 < i )
  {
    v13 = v30;
    v31 = (signed __int64)(v30 + 1);
    if ( *s >> 2 )
      v14 = ((unsigned __int8)*s >> 2) + 32;
    else
      v14 = 32;
    *v13 = v14;
    v15 = (_BYTE *)v31;
    v32 = v31 + 1;
    if ( 16 * *s & 0x30 )
      v16 = (16 * *s & 0x30) + 32;
    else
      v16 = 32;
    *v15 = v16 | ((unsigned __int8)s[1] >> 4);
    v17 = (_BYTE *)v32;
    v33 = v32 + 1;
    if ( 4 * s[1] & 0x3C )
      v18 = (4 * s[1] & 0x3C) + 32;
    else
      v18 = 32;
    *v17 = v18 | ((unsigned __int8)s[2] >> 6);
    v19 = (_BYTE *)v33;
    v30 = (char *)(v33 + 1);
    if ( s[2] & 0x3F )
      v20 = (s[2] & 0x3F) + 32;
    else
      v20 = 32;
    *v19 = v20;
    v25 += 3;
    s += 3;
  }
  *v30 = 0;
  return v34;
}
