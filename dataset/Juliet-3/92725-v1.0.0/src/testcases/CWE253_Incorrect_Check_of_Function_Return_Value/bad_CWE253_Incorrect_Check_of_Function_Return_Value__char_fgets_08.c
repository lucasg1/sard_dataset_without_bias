static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            printLine("Please enter a string: ");
<START>
            if (fgets(data, 100, stdin) < 0)
<END>
            {
                printLine("fgets failed!");
                exit(1);
            }
            printLine(data);
        }
    }
}
