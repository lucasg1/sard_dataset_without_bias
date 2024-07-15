static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) == 0)
<END>
            {
                printLine("fread failed!");
            }
        }
    }
}
