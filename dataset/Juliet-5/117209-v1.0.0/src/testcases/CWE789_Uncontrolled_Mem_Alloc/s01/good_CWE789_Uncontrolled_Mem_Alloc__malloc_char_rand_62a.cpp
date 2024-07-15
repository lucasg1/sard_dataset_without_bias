namespace NAMESPACE0
{
void FUN0(size_t &data)
{
    data = 20;
}
void FUN1(size_t &data)
{
    data = rand();
}
} 
namespace NAMESPACE0
{
void FUN0(size_t &data);
void FUN3()
{
    size_t data;
    data = 0;
    FUN0(data);
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
            myString = (char *)malloc(data*sizeof(char));
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
void FUN1(size_t &data);
void FUN5()
{
    size_t data;
    data = 0;
    FUN1(data);
    {
        char * myString;
        if (data > strlen(HELLO_STRING) && data < 100)
        {
            myString = (char *)malloc(data*sizeof(char));
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
} 
