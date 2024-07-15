static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (fprintf(stdout, "%s\n", "string") == 0)
<END>
        {
            printLine("fprintf failed!");
        }
    }
}
