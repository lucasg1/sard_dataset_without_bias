namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    *data = L'A';
    delete data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    *data = L'A';
    goto sink;
sink:
    printWcharLine(*data);
}
} 
