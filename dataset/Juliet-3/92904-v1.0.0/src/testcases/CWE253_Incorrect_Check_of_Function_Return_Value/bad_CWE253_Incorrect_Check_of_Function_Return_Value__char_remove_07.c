static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (REMOVE("removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
    }
}
