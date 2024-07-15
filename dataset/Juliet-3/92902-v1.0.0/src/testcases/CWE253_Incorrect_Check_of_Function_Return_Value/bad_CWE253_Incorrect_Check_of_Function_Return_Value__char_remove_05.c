static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (REMOVE("removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
    }
}
