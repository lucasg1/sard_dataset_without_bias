namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(size_t data) const
{
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
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(size_t data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(size_t data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(size_t data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    data = 20;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
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
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(size_t data) const
{
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
