namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    struct _twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new struct _twoIntsStruct[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    for(k = 0; k < 1; k++)
    {
        delete[] data;
    }
}
void FUN1()
{
    int h,j;
    struct _twoIntsStruct * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        struct _twoIntsStruct VAR1[100];
        data = VAR1;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    for(j = 0; j < 1; j++)
    {
        ; 
    }
}
} 
