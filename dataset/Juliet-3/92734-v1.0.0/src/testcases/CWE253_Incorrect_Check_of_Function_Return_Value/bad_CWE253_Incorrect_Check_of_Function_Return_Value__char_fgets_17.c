void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
