static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        putwc((wchar_t)L'A', stdout);
<END>
    }
}
