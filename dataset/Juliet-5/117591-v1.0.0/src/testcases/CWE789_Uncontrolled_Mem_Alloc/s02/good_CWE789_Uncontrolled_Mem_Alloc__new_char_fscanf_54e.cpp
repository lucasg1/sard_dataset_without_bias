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
void FUN1(size_t data);
void FUN5()
{
    size_t data;
    data = 0;
    data = 20;
    FUN1(data);
}
void FUN3(size_t data);
void FUN7()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%ud", &data);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(size_t data);
void FUN0(size_t data)
{
    FUN9(data);
}
void FUN11(size_t data);
void FUN2(size_t data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN13(size_t data);
void FUN9(size_t data)
{
    FUN13(data);
}
void FUN15(size_t data);
void FUN11(size_t data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(size_t data)
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
void FUN15(size_t data)
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
