static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            wchar_t * * pointer = (wchar_t * *)ALLOCA(sizeof(wchar_t *));
<START>
            wchar_t * data = *pointer; 
<END>
            printWLine(data);
        }
    }
}
