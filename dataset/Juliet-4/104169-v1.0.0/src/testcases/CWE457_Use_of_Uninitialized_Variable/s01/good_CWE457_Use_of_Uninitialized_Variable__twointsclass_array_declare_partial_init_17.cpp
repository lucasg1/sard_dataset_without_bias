namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    TwoIntsClass * data;
    TwoIntsClass dataUninitArray[10];
    data = dataUninitArray;
    for(i = 0; i < 1; i++)
    {
        for(int i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    for(k = 0; k < 1; k++)
    {
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}
void FUN1()
{
    int h,j;
    TwoIntsClass * data;
    TwoIntsClass dataUninitArray[10];
    data = dataUninitArray;
    for(h = 0; h < 1; h++)
    {
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    for(j = 0; j < 1; j++)
    {
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}
} 
