void FUN0()
{
    wchar_t data;
    if(globalFive==5)
    {
        data = L'W';
    }
    if(globalFive==5)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
