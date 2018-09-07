_BYTE *__fastcall sub_860(const char *a1)
{
  unsigned int v1; // ST1C_4
  int v2; // ST2C_4
  _BYTE *v3; // rax
  _BYTE *v4; // ST30_8
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  int v7; // ST24_4
  _BYTE *v8; // rax
  _BYTE *v9; // ST30_8
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  unsigned int v12; // ST1C_4
  _BYTE *v13; // rax
  _BYTE *v14; // ST30_8
  _BYTE *v15; // rax
  _BYTE *v16; // rax
  signed int i; // [rsp+10h] [rbp-80h]
  unsigned int v19; // [rsp+14h] [rbp-7Ch]
  _BYTE *v20; // [rsp+30h] [rbp-60h]
  _BYTE *v21; // [rsp+38h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-50h]
  __int64 v23; // [rsp+48h] [rbp-48h]
  __int64 v24; // [rsp+50h] [rbp-40h]
  __int64 v25; // [rsp+58h] [rbp-38h]
  __int64 v26; // [rsp+60h] [rbp-30h]
  __int64 v27; // [rsp+68h] [rbp-28h]
  __int64 v28; // [rsp+70h] [rbp-20h]
  __int64 v29; // [rsp+78h] [rbp-18h]
  char v30; // [rsp+80h] [rbp-10h]
  unsigned __int64 v31; // [rsp+88h] [rbp-8h]

  v31 = __readfsqword(0x28u);
  v22 = 5208208757389214273LL;
  v23 = 5786930140093827657LL;
  v24 = 6365651522798441041LL;
  v25 = 7378413942531512921LL;
  v26 = 7957135325236127847LL;
  v27 = 8535856707940741231LL;
  v28 = 3689065129052829815LL;
  v29 = 3398873257388422452LL;
  v30 = 0;
  v19 = strlen(a1);
  v21 = malloc(4 * v19 / 3 + 1);
  v20 = v21;
  for ( i = 0; i < (signed int)(v19 - v19 % 3); i += 3 )
  {
    v1 = (a1[i + 1] << 8) + (a1[i] << 16) + a1[i + 2];
    v2 = a1[i + 2] & 0x3F;
    v3 = v20;
    v4 = v20 + 1;
    *v3 = *((_BYTE *)&v22 + ((v1 >> 18) & 0x3F));
    v5 = v4++;
    *v5 = *((_BYTE *)&v22 + ((v1 >> 12) & 0x3F));
    *v4 = *((_BYTE *)&v22 + ((v1 >> 6) & 0x3F));
    v6 = v4 + 1;
    v20 = v4 + 2;
    *v6 = *((_BYTE *)&v22 + v2);
  }
  if ( v19 % 3 == 1 )
  {
    v7 = 16 * a1[i] & 0x3F;
    v8 = v20;
    v9 = v20 + 1;
    *v8 = *((_BYTE *)&v22 + (((unsigned int)(a1[i] << 16) >> 18) & 0x3F));
    v10 = v9++;
    *v10 = *((_BYTE *)&v22 + v7);
    *v9 = 61;
    v11 = v9 + 1;
    v20 = v9 + 2;
    *v11 = 61;
  }
  else if ( v19 % 3 == 2 )
  {
    v12 = (a1[i] << 16) + (a1[i + 1] << 8);
    v13 = v20;
    v14 = v20 + 1;
    *v13 = *((_BYTE *)&v22 + ((v12 >> 18) & 0x3F));
    v15 = v14++;
    *v15 = *((_BYTE *)&v22 + ((v12 >> 12) & 0x3F));
    *v14 = *((_BYTE *)&v22 + ((v12 >> 6) & 0x3F));
    v16 = v14 + 1;
    v20 = v14 + 2;
    *v16 = 61;
  }
  *v20 = 0;
  return v21;
}
