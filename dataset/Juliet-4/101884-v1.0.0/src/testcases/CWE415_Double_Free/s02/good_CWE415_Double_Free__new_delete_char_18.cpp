namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char;
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
    goto sink;
sink:
    delete data;
}
} 
