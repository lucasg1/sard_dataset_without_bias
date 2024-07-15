static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            if (fscanf(stdin, "%99s\0", data) == 0)
<END>
            {
                printLine("fscanf failed!");
            }
        }
    }
}
