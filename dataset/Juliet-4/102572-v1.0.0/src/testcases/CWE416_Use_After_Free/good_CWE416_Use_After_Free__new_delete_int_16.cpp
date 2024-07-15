namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = new int;
        *data = 5;
        delete data;
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
        data = new int;
        *data = 5;
        break;
    }
    while(1)
    {
        printIntLine(*data);
        break;
    }
}
} 
