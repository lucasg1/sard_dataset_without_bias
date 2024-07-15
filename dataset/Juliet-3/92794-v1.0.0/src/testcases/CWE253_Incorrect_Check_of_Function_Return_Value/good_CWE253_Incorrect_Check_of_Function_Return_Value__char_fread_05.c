static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}
void FUN1()
{
    if(staticTrue)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}
