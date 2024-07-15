static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
