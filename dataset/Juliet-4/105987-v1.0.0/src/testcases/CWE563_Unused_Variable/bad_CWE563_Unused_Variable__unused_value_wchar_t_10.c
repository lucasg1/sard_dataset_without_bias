void FUN0()
{
    wchar_t data;
    if(globalTrue)
    {
        data = L'W';
    }
    if(globalTrue)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
