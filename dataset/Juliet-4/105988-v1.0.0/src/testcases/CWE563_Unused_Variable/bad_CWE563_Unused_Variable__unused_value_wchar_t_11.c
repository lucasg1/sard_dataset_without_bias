void FUN0()
{
    wchar_t data;
    if(globalReturnsTrue())
    {
        data = L'W';
    }
    if(globalReturnsTrue())
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
