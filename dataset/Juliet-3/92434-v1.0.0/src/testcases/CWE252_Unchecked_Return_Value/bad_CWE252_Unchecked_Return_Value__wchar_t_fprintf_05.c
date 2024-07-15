static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        fwprintf(stdout, L"%s\n", L"string");
<END>
    }
}
