void FUN0()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsTrue())
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
