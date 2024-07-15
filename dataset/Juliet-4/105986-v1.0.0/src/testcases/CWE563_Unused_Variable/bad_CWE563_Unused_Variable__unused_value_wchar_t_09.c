void FUN0()
{
    wchar_t data;
    if(GLOBAL_CONST_TRUE)
    {
        data = L'W';
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
