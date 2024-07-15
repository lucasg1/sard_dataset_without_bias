namespace NAMESPACE0
{
void FUN0(int * data)
{
    delete [] data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    FUN0(data);
}
void FUN2(int * data)
{
    delete data;
}
void FUN3()
{
    int * data;
    data = NULL;
    data = new int;
    FUN2(data);
}
} 
