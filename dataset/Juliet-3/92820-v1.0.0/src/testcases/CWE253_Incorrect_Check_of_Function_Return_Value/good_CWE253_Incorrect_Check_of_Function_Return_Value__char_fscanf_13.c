void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (fscanf(stdin, "%99s\0", data) == EOF)
            {
                printLine("fscanf failed!");
            }
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (fscanf(stdin, "%99s\0", data) == EOF)
            {
                printLine("fscanf failed!");
            }
        }
    }
}
