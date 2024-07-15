void FUN0()
{
    wchar_t data;
    if(1)
    {
        data = L'W';
    }
    if(1)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
