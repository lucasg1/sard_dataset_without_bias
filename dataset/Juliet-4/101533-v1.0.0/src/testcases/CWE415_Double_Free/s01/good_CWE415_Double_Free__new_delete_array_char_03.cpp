namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = new char[100];
        delete [] data;
    }
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = new char[100];
        delete [] data;
    }
    if(5==5)
    {
        ; 
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = new char[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
} 
