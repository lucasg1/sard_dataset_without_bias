namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = new int[100];
        data[0] = 5;
        printIntLine(data[0]);
        break;
    }
    while(1)
    {
        delete[] data;
        break;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    while(1)
    {
        int VAR1[100];
        data = VAR1;
        data[0] = 5;
        printIntLine(data[0]);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
