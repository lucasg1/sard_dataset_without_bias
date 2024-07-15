static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
    }
}
