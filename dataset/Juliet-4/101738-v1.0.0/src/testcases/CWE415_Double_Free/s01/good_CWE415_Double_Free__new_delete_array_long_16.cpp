namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    while(1)
    {
        data = new long[100];
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
    long * data;
    data = NULL;
    while(1)
    {
        data = new long[100];
        break;
    }
    while(1)
    {
        delete [] data;
        break;
    }
}
} 
