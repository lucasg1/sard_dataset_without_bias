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
        int VAR1[100];
        data = VAR1;
        data[0] = 5;
        printIntLine(data[0]);
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
        data = new int[100];
        data[0] = 5;
        printIntLine(data[0]);
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        delete[] data;
    }
}
} 
