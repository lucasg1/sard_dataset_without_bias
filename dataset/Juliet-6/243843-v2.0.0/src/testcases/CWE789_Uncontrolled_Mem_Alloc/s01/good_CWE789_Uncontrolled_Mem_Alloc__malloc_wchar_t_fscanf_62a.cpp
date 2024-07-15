namespace NAMESPACE0
{
void FUN0(size_t &data)
{
    data = 20;
}
void FUN1(size_t &data)
{
    fscanf(stdin, "%zu", &data);
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
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
            if (myString == NULL) {exit(-1);}
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
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
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING) && data < 100)
        {
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
            if (myString == NULL) {exit(-1);}
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
} 
