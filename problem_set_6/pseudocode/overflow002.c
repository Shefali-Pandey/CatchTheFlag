// overflow002.c

void func()
{
  char y;
  short x = 2;
  char key = 0xff;
  int arr[32];

  for (int i = 0; i <= 32; i++)
    scanf("%d", arr + i);

  if (key == 0xa)
    flag();
  else
    printf("Nah..\n");
}
