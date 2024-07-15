static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
