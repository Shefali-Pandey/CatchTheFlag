// overflow101.c

void func(int key)
{
  char str[32];
  gets(str);

  if (key == 0xacedcafe)
    flag();
  else
    printf("Nah..\n");
}

func(0xbeedbeef);
