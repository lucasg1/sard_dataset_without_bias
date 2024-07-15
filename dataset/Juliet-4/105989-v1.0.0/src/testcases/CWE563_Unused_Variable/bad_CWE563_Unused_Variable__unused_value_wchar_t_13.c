void FUN0()
{
    wchar_t data;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = L'W';
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
