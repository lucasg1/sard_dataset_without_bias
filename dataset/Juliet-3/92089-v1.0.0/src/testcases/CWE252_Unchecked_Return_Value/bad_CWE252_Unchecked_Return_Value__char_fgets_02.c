void FUN0()
{
    if(1)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            printLine("Please enter a string: ");
<START>
            fgets(data, 100, stdin);
<END>
            printLine(data);
        }
    }
}
