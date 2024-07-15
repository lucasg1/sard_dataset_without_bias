static int staticFive = 5;
void FUN0()
{
    twoIntsStruct data;
    if(staticFive==5)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(staticFive==5)
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
    }
}
