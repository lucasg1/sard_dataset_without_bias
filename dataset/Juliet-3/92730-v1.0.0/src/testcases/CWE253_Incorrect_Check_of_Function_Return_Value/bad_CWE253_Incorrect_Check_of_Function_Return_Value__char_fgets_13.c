void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
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
