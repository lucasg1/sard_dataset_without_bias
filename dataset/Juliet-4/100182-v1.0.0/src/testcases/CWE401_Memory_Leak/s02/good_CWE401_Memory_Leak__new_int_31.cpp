namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    int VAR1;
    data = &VAR1;
    *data = 5;
    printIntLine(*data);
    {
        int * dataCopy = data;
        int * data = dataCopy;
        ; 
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    {
        int * dataCopy = data;
        int * data = dataCopy;
        delete data;
    }
}
} 
