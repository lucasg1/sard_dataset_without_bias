namespace NAMESPACE0
{
void FUN0(size_t data);
void FUN1(size_t data)
{
    FUN0(data);
}
void FUN2(size_t data);
void FUN3(size_t data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(size_t data);
void FUN5()
{
    size_t data;
    data = 0;
    data = 20;
    FUN4(data);
}
void FUN6(size_t data);
void FUN7()
{
    size_t data;
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = strtoul(inputBuffer, NULL, 0);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN9(size_t data);
void FUN4(size_t data)
{
    FUN9(data);
}
void FUN11(size_t data);
void FUN6(size_t data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN1(size_t data);
void FUN9(size_t data)
{
    FUN1(data);
}
void FUN3(size_t data);
void FUN11(size_t data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(size_t data)
{
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
            myString = new wchar_t[data];
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
void FUN2(size_t data)
{
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING) && data < 100)
        {
            myString = new wchar_t[data];
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
} 
