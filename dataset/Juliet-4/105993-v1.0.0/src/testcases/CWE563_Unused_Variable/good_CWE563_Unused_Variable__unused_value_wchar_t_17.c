void FUN0()
{
    int i,k;
    wchar_t data;
    for(i = 0; i < 1; i++)
    {
        data = L'W';
    }
    for(k = 0; k < 1; k++)
    {
        printf("%02lx\n", data);
    }
}
void FUN1()
{
    int h,j;
    wchar_t data;
    for(h = 0; h < 1; h++)
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    for(j = 0; j < 1; j++)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
