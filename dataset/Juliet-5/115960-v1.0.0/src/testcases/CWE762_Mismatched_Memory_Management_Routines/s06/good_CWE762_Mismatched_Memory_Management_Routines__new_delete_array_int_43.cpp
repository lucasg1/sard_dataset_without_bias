namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int[100];
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
    delete [] data;
}
void FUN2(int * &data)
{
    data = new int;
}
void FUN3()
{
    int * data;
    data = NULL;
    FUN2(data);
    delete data;
}
} 
