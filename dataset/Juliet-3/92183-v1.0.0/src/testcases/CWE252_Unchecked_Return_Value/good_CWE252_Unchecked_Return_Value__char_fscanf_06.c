static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
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
