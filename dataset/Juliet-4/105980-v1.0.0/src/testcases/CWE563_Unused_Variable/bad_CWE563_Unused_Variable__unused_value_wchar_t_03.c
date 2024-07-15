void FUN0()
{
    wchar_t data;
    if(5==5)
    {
        data = L'W';
    }
    if(5==5)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
