// overflow000.c

void func()
{
  int key = 0;
  int str[32];

  for (int i = 0; i <= 32; i++)
    scanf("%d", str + i);

  if (key == 1)
    flag();
  else
    printf("Nah..\n");
}
