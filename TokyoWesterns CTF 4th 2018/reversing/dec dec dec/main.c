__int64 __fastcall main(int a1, char **a2, char **a3)
{
  size_t v3; // rax
  char *dest; // ST18_8
  size_t v5; // rax
  const char *v6; // rax
  char *v7; // rax
  char *v8; // ST18_8

  if ( a1 != 2 )
  {
    puts("./dec_dec_dec flag_string_is_here ");
    exit(0);
  }
  v3 = strlen(a2[1]);
  dest = (char *)malloc(v3 + 1);
  v5 = strlen(a2[1]);
  strncpy(dest, a2[1], v5);
  v6 = sub_860(dest);
  v7 = sub_F59(v6);
  v8 = (char *)sub_BE7(v7);
  if ( !strcmp(v8, s2) )
    puts("correct  :)");
  else
    puts("incorrect :(");
  return 0LL;
}
