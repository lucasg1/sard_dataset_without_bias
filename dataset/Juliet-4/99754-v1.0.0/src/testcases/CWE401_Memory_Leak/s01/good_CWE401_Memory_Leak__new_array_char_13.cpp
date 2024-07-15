namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete[] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        delete[] data;
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        char VAR1[100];
        data = VAR1;
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        char VAR1[100];
        data = VAR1;
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
}
} 
