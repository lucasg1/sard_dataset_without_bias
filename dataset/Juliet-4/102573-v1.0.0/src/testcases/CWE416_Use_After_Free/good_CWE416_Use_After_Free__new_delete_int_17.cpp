namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    int * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    for(k = 0; k < 1; k++)
    {
        ; 
    }
}
void FUN1()
{
    int h,j;
    int * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new int;
        *data = 5;
    }
    for(j = 0; j < 1; j++)
    {
        printIntLine(*data);
    }
}
} 
