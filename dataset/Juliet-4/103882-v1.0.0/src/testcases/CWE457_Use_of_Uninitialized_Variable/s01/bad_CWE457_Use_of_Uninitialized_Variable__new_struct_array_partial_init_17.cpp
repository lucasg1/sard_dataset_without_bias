namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    for(i = 0; i < 1; i++)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
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
<START>
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
<END>
            }
        }
        delete [] data;
    }
}
} 
