static int staticFive = 5;
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct dataUninitArray[10];
    data = dataUninitArray;
    if(staticFive==5)
    {
        ; 
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
