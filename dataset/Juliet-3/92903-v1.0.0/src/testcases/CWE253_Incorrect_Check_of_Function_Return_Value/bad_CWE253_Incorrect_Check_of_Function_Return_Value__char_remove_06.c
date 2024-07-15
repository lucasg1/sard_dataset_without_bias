static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
<START>
        if (REMOVE("removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
    }
}
