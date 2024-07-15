void FUN0()
{
    int i,j;
    wchar_t data;
    for(i = 0; i < 1; i++)
    {
        data = L'W';
    }
    for(j = 0; j < 1; j++)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
