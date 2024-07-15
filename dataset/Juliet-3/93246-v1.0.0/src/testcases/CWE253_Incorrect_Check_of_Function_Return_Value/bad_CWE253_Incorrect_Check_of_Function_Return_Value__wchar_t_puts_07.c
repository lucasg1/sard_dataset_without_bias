static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (PUTS(L"string") == 0)
<END>
        {
            printLine("puts failed!");
        }
    }
}
