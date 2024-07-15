namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long[100];
    delete [] data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long[100];
    goto sink;
sink:
    delete [] data;
}
} 
