namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    size_t data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = rand();
    }
    for(k = 0; k < 1; k++)
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING) && data < 100)
            {
                myString = new char[data];
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                delete [] myString;
            }
            else
            {
                printLine("Input is less than the length of the source string or too large");
            }
        }
    }
}
void FUN1()
{
    int h,j;
    size_t data;
    data = 0;
    for(h = 0; h < 1; h++)
    {
        data = 20;
    }
    for(j = 0; j < 1; j++)
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING))
            {
                myString = new char[data];
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                delete [] myString;
            }
            else
            {
                printLine("Input is less than the length of the source string");
            }
        }
    }
}
} 
