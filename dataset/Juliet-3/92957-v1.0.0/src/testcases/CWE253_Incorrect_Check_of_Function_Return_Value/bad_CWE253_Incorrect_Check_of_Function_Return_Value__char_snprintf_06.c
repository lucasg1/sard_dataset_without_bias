static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
