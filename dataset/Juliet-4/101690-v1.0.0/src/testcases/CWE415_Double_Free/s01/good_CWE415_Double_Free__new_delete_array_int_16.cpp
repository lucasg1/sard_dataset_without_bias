namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = new int[100];
        delete [] data;
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = new int[100];
        break;
    }
    while(1)
    {
        delete [] data;
        break;
    }
}
} 
