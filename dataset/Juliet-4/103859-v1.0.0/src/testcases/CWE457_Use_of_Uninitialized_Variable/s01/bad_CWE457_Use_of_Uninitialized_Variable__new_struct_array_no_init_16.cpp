namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    while(1)
    {
        ; 
        break;
    }
    while(1)
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
        break;
    }
}
} 
