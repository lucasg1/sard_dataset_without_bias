static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t * data;
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
    {
<START>
        printWLine(data);
<END>
    }
}
