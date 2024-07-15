namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    int * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new int[100];
        data[0] = 5;
        printIntLine(data[0]);
    }
    for(k = 0; k < 1; k++)
    {
        delete[] data;
    }
}
void FUN1()
{
    int h,j;
    int * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        int VAR1[100];
        data = VAR1;
        data[0] = 5;
        printIntLine(data[0]);
    }
    for(j = 0; j < 1; j++)
    {
        ; 
    }
}
} 
