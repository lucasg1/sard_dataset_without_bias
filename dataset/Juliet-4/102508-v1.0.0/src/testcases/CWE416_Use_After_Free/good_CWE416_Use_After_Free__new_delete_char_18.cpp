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
    delete data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char;
    *data = 'A';
    goto sink;
sink:
    printHexCharLine(*data);
}
} 
