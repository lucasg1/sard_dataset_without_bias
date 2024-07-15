namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    goto sink;
sink:
    delete data;
}
void FUN1()
{
    char * data;
    data = NULL;
    goto source;
source:
    char VAR1;
    data = &VAR1;
    *data = 'A';
    printHexCharLine(*data);
    goto sink;
sink:
    ; 
}
} 
