void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            printLine("Please enter a string: ");
            if (fgets(data, 100, stdin) == NULL)
            {
<START>
            }
<END>
            printLine(data);
        }
    }
}
