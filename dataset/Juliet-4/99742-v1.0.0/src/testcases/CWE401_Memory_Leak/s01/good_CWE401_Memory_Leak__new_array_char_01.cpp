namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    char VAR1[100];
    data = VAR1;
    strcpy(data, "A String");
    printLine(data);
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    delete[] data;
}
} 
