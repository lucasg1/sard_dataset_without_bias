namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    for(i = 0; i < 1; i++)
    {
        ; 
    }
    for(k = 0; k < 1; k++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
        delete [] data;
    }
}
void FUN1()
{
    int h,j;
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    for(h = 0; h < 1; h++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
    }
    for(j = 0; j < 1; j++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
        delete [] data;
    }
}
} 
