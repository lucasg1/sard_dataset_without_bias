namespace NAMESPACE0
{
void FUN0(char * data)
{
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    char VAR1[100];
    data = VAR1;
    strcpy(data, "A String");
    printLine(data);
    FUN0(data);
}
void FUN2(char * data)
{
    delete[] data;
}
void FUN3()
{
    char * data;
    data = NULL;
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    FUN2(data);
}
} 
