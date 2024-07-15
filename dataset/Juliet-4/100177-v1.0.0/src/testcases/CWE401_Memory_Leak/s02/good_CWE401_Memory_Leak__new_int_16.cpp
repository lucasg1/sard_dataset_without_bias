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
        printIntLine(*data);
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    while(1)
    {
        int VAR1;
        data = &VAR1;
        *data = 5;
        printIntLine(*data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
