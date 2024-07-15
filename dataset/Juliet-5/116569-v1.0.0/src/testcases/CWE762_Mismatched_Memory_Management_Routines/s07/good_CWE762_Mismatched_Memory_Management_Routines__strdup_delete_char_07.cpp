static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(staticFive==5)
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
} 
