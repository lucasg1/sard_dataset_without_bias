namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL;
    {
        int * data = *dataPtr1;
        int VAR1;
        data = &VAR1;
        *data = 5;
        printIntLine(*data);
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        ; 
    }
}
void FUN1()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL;
    {
        int * data = *dataPtr1;
        data = new int;
        *data = 5;
        printIntLine(*data);
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        delete data;
    }
}
} 
