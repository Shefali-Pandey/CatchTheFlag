// overflow001.c

void func()
{
  int key = 0xaabbccdd;
  char str[32];
  read(0, str, 36);
  if (key == 0xddccbbaa)
    flag();
  else
    printf("Nah..\n");
}
