namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int[100];
    delete [] data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int[100];
    goto sink;
sink:
    delete [] data;
}
} 
