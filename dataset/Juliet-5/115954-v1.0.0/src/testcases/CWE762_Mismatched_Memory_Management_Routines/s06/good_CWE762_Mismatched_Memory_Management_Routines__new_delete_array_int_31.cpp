namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = new int[100];
    {
        int * dataCopy = data;
        int * data = dataCopy;
        delete [] data;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    {
        int * dataCopy = data;
        int * data = dataCopy;
        delete data;
    }
}
} 
