static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    wchar_t data;
    if(STATIC_CONST_FIVE==5)
    {
        data = L'W';
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
