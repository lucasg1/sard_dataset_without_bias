static int staticFive = 5;
void FUN0()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(staticFive==5)
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
    if(staticFive==5)
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
    }
}
