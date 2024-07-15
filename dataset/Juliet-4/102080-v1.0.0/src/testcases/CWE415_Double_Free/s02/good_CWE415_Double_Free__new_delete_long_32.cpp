namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL;
    {
        long * data = *dataPtr1;
        data = new long;
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        delete data;
    }
}
void FUN1()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL;
    {
        long * data = *dataPtr1;
        data = new long;
        delete data;
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        ; 
    }
}
} 
