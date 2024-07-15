namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    delete [] data;
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
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    goto sink;
sink:
    printLine(data);
}
} 
