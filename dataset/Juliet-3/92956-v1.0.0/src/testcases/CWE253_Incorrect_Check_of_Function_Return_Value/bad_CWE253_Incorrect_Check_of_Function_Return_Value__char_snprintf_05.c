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
            if (SNPRINTF(data,100-strlen(SRC_STRING)-1, "%s\n", SRC_STRING) == 0)
<END>
            {
                printLine("snprintf failed!");
            }
        }
    }
}
