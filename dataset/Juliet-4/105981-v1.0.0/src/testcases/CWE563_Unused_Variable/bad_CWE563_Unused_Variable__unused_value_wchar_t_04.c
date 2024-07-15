static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    wchar_t data;
    if(STATIC_CONST_TRUE)
    {
        data = L'W';
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
