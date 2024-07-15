namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    goto sink;
sink:
    delete[] data;
}
void FUN1()
{
    char * data;
    data = NULL;
    goto source;
source:
    char VAR1[100];
    data = VAR1;
    strcpy(data, "A String");
    printLine(data);
    goto sink;
sink:
    ; 
}
} 
