char *__fastcall sub_F59(const char *a1)
{
  int v1; // ST1C_4
  char *s; // [rsp+8h] [rbp-28h]
  char v4; // [rsp+1Bh] [rbp-15h]
  char *v5; // [rsp+20h] [rbp-10h]
  char *v6; // [rsp+28h] [rbp-8h]

  s = (char *)a1;
  v1 = strlen(a1);
  v6 = (char *)malloc((unsigned int)(v1 + 1));
  v5 = v6;
  while ( *s )
  {
    v4 = *s;
    if ( *s <= 64 || v4 > 90 )
    {
      if ( v4 <= 96 || v4 > 122 )
        *v5 = *s;
      else
        *v5 = (v4 - 84) % 26 + 97;
    }
    else
    {
      *v5 = (v4 - 52) % 26 + 65;
    }
    ++v5;
    ++s;
  }
  *v5 = 0;
  return v6;
}
