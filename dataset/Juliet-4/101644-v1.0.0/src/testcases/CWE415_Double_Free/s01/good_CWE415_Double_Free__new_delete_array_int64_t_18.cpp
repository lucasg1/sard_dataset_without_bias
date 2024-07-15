namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t[100];
    delete [] data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t[100];
    goto sink;
sink:
    delete [] data;
}
} 
