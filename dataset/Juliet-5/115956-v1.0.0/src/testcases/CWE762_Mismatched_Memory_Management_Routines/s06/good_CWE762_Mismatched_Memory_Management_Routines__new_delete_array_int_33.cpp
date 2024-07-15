namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = new int[100];
    {
        int * data = dataRef;
        delete [] data;
    }
}
void FUN1()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = new int;
    {
        int * data = dataRef;
        delete data;
    }
}
} 
