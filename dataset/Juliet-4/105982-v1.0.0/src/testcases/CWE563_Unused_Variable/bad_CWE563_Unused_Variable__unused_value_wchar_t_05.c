static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t data;
    if(staticTrue)
    {
        data = L'W';
    }
    if(staticTrue)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
