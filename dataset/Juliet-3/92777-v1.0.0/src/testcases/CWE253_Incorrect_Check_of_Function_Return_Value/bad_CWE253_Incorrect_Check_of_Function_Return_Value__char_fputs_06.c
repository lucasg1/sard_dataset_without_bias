static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
<START>
        if (fputs("string", stdout) == 0)
<END>
        {
            printLine("fputs failed!");
        }
    }
}
